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

  $items['create-intransition-fake-reviews'] = array(
    'description' => 'Create [in]Transition fake reviews',
    'arguments' => array(),
    'options' => array(),
    'aliases' => array('cifr'),
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

function drush_mc_create_intransition_fake_reviews() {

  $pubstat = intval(1);

  $dt = new DateTime('January 1, 2013');
  
  $pubdate = $dt->getTimestamp();  

  $embed = '<iframe allowfullscreen="" frameborder="0" height="360" mozallowfullscreen="" src="https://player.vimeo.com/video/233553740" webkitallowfullscreen="" width="640"></iframe>';
  
  $body = "Overhaul Spanish Main draft cutlass gunwalls lookout trysail loaded to the gunwalls careen bilge rat. Lanyard maroon warp black spot salmagundi ye pinnace heave to scuttle reef sails. Stern spike lateen sail transom gally hulk crack Jennys tea cup gibbet clap of thunder salmagundi.";


  $node = mc_drush_create_node(
    array(
      'type' => 'spoke',
      'title' => 'TEST - SPOKE - Overhaul Spanish Main',
      'uid' => 8,
      'contributors' => array(8,9,10),
      'embed' => $embed,
      'body' => $body,
      'pubdate' => $pubdate,
      'pubstat' => $pubstat,
    )
  );
  
  $body = "Sail ho quarterdeck jack furl tack Nelsons folly sheet heave to haul wind gangplank. Deadlights bring a spring upon her cable knave Davy Jones' Locker Barbary Coast warp lanyard furl fluke spanker. Bilged on her anchor boom code of conduct crow's nest brig deadlights boatswain reef sails Jack Tar Shiver me timbers.";

  $review1 = mc_drush_create_node(
    array(
      'type' => 'review',
      'title' => 'TEST - REVIEW - Sail ho quarterdeck jack',
      'uid' => 9,
      'body' => $body,
      'pubstat' => $pubstat,      
      'reviewer' => array(9),
      'isreviewof' => intval($node->nid),
    )
  );

  $body = "Scurvy hornswaggle chantey reef sails plunder take a caulk main sheet Cat o'nine tails wherry scuppers. Lugger crimp topsail Blimey lateen sail come about brig chandler run a shot across the bow execution dock. Maroon parley Jack Tar black spot crow's nest careen hogshead reef sails bilge rat scuppers.";

  $review2 = mc_drush_create_node(
    array(
      'type' => 'review',
      'title' => 'TEST - REVIEW - Scurvy hornswaggle chantey',
      'uid' => 10,
      'body' => $body,
      'pubstat' => $pubstat,
      'reviewer' => array(10),
      'isreviewof' => intval($node->nid),
    )
  );    

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

function mc_drush_create_node($config) {

  drush_log($config['title'], 'ok');
  
  $values = array(
    'type' => $config['type'],
    'uid' => $config['uid'],
    'status' => 1,
    'comment' => 1,
    'promote' => 0,
  );

  $entity = entity_create('node', $values);

  $wrapper = entity_metadata_wrapper('node', $entity);  
  
  $wrapper->title->set($config['title']);

  if (isset($config['embed'])) {
    $wrapper->field_embed->set(array('value' =>  $config['embed'], 'format'=> 'limited_html'));
  } 

  if (isset($config['body']) && $config['type'] == 'spoke') {
    $wrapper->field_body->set(array('value' => $config['body']));
  }

  if (isset($config['body']) && $config['type'] == 'review') {
    $wrapper->body->set(array('value' => $config['body']));
  }  

  if (isset($config['isreviewof'])) {
    $wrapper->field_isreviewof->set($config['isreviewof']);
  }

  if (isset($config['reviewer'])) {
    $wrapper->field_reviewer->set($config['reviewer']);
  }

  if (isset($config['pubdate'])) {
    $wrapper->field_pubdate->set($pubdate);  
  }

  if (isset($config['contributors'])) {
    $wrapper->field_contributors->set($config['contributors']);
  }

  if (isset($config['pubstat'])) {
    $wrapper->field_pubstat->set($config['pubstat']);
  }

  $wrapper->save();

  return $entity;

}