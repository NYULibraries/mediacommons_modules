<?php

/**
 * Implements hook_drush_command().
 */
function mc_drush_command() {

  $items = array();

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
      break;
    case 'drush:set-theme-setting-class-name':
      return dt('Set theme settings Special Body Class Name.');
      break;
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

/**
 * Implementation of drush_hook_COMMAND().
 * e.g.,
 * localhost:   http://{ip}:2000/fieldguide/latest-hub?pjax=1
 * development: http://devmc2.dlib.nyu.edu/fieldguide/latest-hub?pjax=1
 * stage:       http://stagemc2.dlib.nyu.edu/fieldguide/latest-hub?pjax=1
 *
 */
function drush_mc_update_fieldguide_umbrella_block($url) {
  if (filter_var($url, FILTER_VALIDATE_URL)) {
    $url = check_url($url);
  }
  else {
    switch ($url) {
      case 'development':
        $url = 'http://devmc2.dlib.nyu.edu/fieldguide/latest-hub?pjax=1';
        break;
      case 'stage':
        $url = 'http://stagemc2.dlib.nyu.edu/fieldguide/latest-hub?pjax=1';
        break;
      default:
        return drush_log('Please provide a valid URL', 'error');
    }
  }
  $bid = 'mc_fieldguide';
  $sql = "SELECT url FROM {mediacommons_blocks_blocks} WHERE mbid = :mbid";
  $item = db_query($sql, array(':mbid' => $bid))->fetchObject();
  $update = array('proceed' => time(), 'expire' => time() + (3600 * 4));
  $request = drupal_http_request($url);
  /** we can't reach the URL. we have a problem. */
  if (isset($request->error)) {
    drush_log($request->error, 'error');
  }
  else {
    $status_message = strtolower(check_plain($request->status_message));
    if ($status_message == 'ok') {
      $update['content'] = serialize(check_markup($request->data, 'full_html'));
      $success = db_update('mediacommons_blocks_blocks')->fields($update)->condition('mbid', $bid, '=')->execute();
      if ($success) {
        drush_log($update['content'], 'ok');
        drush_log('Success', 'ok');
      }
      else {
        drush_log('Unable to update cache', 'error');
      }
    }
    else {
      drush_log($status_message, 'ok');
    }
  }
}
