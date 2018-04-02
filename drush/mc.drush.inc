<?php

/**
 * Implements hook_drush_command().
 */
function mc_drush_command() {

  $items = array();

  $items['rebuild-cache'] = array(
    'description' => 'Rebuild all MediaCommons blocks cache.',
    'arguments' => array(),
    'options' => array(),
    'aliases' => array('mcrc'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
  );
  
  $items['init-fieldguide'] = array(
    'description' => 'Init Fieldguide block',
    'arguments' => array(),
    'options' => array(),
    'aliases' => array('mcif'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
  );   

  $items['solr-metadata'] = array(
    'description' => 'Refresh Apache Solr Multi-Site metadata.',
    'aliases' => array('amrm'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
  );

  $items['set-theme-setting-class-name'] = array(
    'description' => 'Set theme settings Special Body Class Name.',
    'arguments' => array(
      'class' => 'Special Body Class Name',
    ),
    'options' => array(
      'option-name' => array(
        'description' => 'Set the Special Body Class Name.',
        'example-value' => 'e.g., tne',
      ),
    ),
    'aliases' => array('stscn'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
  );

  $items['update-fieldguide-umbrella-block'] = array(
    'description' => 'Update fieldguide Umbrella block',
    'arguments' => array(
      'feed' => 'Fieldguide URL',
    ),
    'options' => array(
      'option-name' => array(
        'description' => 'Fieldguide URL',
        'example-value' => 'e.g., http://example.com',
      ),
    ),
    'aliases' => array('ufub'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
  );

  return $items;

}

/**
 * Implements hook_drush_help().
 *
 * @param
 *   A string with the help section (prepend with 'drush:')
 *
 * @return
 *   A string with the help text for your command.
 */
function mc_drush_help($section) {
  switch ($section) {
    case 'drush:solr-metadata':
      return dt('Refresh Apache Solr Multi-Site metadata');
    case 'drush:set-theme-setting-class-name':
      return dt('Set theme settings Special Body Class Name.');
    case 'drush:rebuild-cache':
      return dt("Rebuild all MediaCommons blocks cache.");
  }
}

/**
 * Implementation of drush_hook_COMMAND().
 */
function drush_mc_solr_metadata() {
  module_load_include('inc', 'apachesolr_multisitesearch', 'apachesolr_multisitesearch.index');
  // Delete all current variables and refresh them
  variable_del('apachesolr_multisitesearch_last_metadata_update');
  variable_del('apachesolr_multisitesearch_last_metadata_fetch');
  apachesolr_multisitesearch_refresh_metadata();
  drush_log(dt('The metadata has been refreshed.'), 'ok');
}

/**
 * Implementation of drush_hook_COMMAND().
 */
function drush_mc_set_theme_setting_class_name($class) {
  $settings = variable_get('theme_mediacommons_settings');
  $settings['special_body_class'] = $class;
  variable_set('theme_mediacommons_settings', $settings);
}

function drush_mc_update_fieldguide_umbrella_block() {
  mediacommons_fieldguide_cron();
}

function drush_mc_init_fieldguide() {
  module_enable(array('mediacommons_fieldguide'));
  mediacommons_fieldguide_cron();
}

/**
 * Implementation of drush_hook_COMMAND().
 */
function drush_mc_rebuild_cache () {
  while (TRUE) {
    $update = array(
      'proceed' => time(),
      'expire' => time() + (3600 * 4),
    );
    $item = db_query_range("SELECT mbid, type, url, callback FROM {mediacommons_blocks_blocks} WHERE expire > 0 AND type = '2' ORDER BY proceed ASC", 0, 1, array())->fetchObject();
    if ($item) {
      if ($item->type == 2) { // 2 stands for source. See: mediacommons_blocks_list_types
        if ($item->url) {
          $url = check_url($item->url);
          $request = drupal_http_request($url);
          if ($request->status_message) {
            $status_message = strtolower(check_plain($request->status_message));
            if ($status_message == 'ok') {
              $text = filter_xss($request->data, mediacommons_filter_allowed_tags());
              $update['content'] = serialize($text);             
            }
          }
        }
        $succeeded = db_update('mediacommons_blocks_blocks')->fields($update)->condition('mbid', $item->mbid, '=')->execute();
        if ($succeeded) {
          drush_log('MediaCommons Blocks: Cache cleaned', 'ok');
          return $item;
        }
      }
      else { // at the moment we only cache source
        // No items currently available to claim.
        return FALSE;
      }
    }
    else {
      // No items currently available to claim.
      return FALSE;
    }
  }  
}