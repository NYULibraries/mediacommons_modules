<?php

/**
 * Implements hook_drush_command().
 */
function mediacommons_blocks_drush_command () {
  $items = array();
  $items['mc-rebuild-cache'] = array(
    'description' => "Rebuild all MediaCommons blocks cache.",
    'arguments' => array(),
    'options' => array(),
    'aliases' => array('mcrc'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
  );
  $items['mc-init-fieldguide'] = array(
    'description' => "Init Fieldguide block",
    'arguments' => array(),
    'options' => array(),
    'aliases' => array('mcif'),
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
function mediacommons_blocks_drush_help ($section) {
  switch ($section) {
    case 'drush:mc-rebuild-cache':
      return dt("Rebuild all MediaCommons blocks cache.");
  }
}

function drush_mediacommons_blocks_mc_init_fieldguide () {
  $options = array(
    'type' => 'source',
    'mbid' => 'mc_fieldguide',    
    'label' => 'Field Guide Survey Question',
    'url' => 'http://devmc2.dlib.nyu.edu/fieldguide/latest-hub-fieldguide-widget?pjax=1',
  );
  mediacommons_blocks_save_block($options);
}

/**
 * Implementation of drush_hook_COMMAND().
 */
function drush_mediacommons_blocks_mc_rebuild_cache () {
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
