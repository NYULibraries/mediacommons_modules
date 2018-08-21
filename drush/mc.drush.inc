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

  $items['create-pirates'] = array(
    'description' => 'Create pirate users',
    'arguments' => array(),
    'options' => array(),
    'aliases' => array('mccp'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
  );

  $items['kick-pirates'] = array(
    'description' => 'Kick pirates',
    'arguments' => array(),
    'options' => array(),
    'aliases' => array('mckp'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
  );

  $items['remove-test-users'] = array(
    'description' => 'Remove test users',
    'arguments' => array(),
    'options' => array(),
    'aliases' => array('mcrtu'),
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

  $node_nids = array();

  $map = array();

  $pirates = array(
    'pirate.club.1@nyu.edu',
    'pirate.club.2@nyu.edu',
    'pirate.club.3@nyu.edu',
  );

  // load all pirates
  $pirates_object = array();
  $pirates_uids = array();
  $pirates_uid = array();
  $pirates_by_mail = array();

  foreach ($pirates as $index => $pirate) {
    $l = user_load_by_mail($pirate);
    $pirates_object[$pirate] = $l;
    $pirates_uid[] = $l->uid;
  }

  $body = array(
    "Overhaul Spanish Main draft cutlass gunwalls lookout trysail loaded to the gunwalls careen bilge rat. Lanyard maroon warp black spot salmagundi ye pinnace heave to scuttle reef sails. Stern spike lateen sail transom gally hulk crack Jennys tea cup gibbet clap of thunder salmagundi.",
    "Sail ho quarterdeck jack furl tack Nelsons folly sheet heave to haul wind gangplank. Deadlights bring a spring upon her cable knave Davy Jones' Locker Barbary Coast warp lanyard furl fluke spanker. Bilged on her anchor boom code of conduct crow's nest brig deadlights boatswain reef sails Jack Tar Shiver me timbers.",
    "Scurvy hornswaggle chantey reef sails plunder take a caulk main sheet Cat o'nine tails wherry scuppers. Lugger crimp topsail Blimey lateen sail come about brig chandler run a shot across the bow execution dock. Maroon parley Jack Tar black spot crow's nest careen hogshead reef sails bilge rat scuppers.",
  );  

  foreach ($pirates_object as $index => $object) {
    $result = db_select('node')
      ->fields('node', array('nid'))
      ->condition('type', 'hub')
      ->orderRandom()
      ->range(0, 2)
      ->execute();
    foreach ($result->fetchAll() as $record) {
      $spokes = array();
      $node = node_load($record->nid);
      $node->uid = $object->uid;
      unset($node->nid);
      unset($node->vid);
      unset($node->path);
      node_save($node);
      $wrapper = entity_metadata_wrapper('node', $node);
      foreach ($wrapper->field_spokes->value() as $spoke) {
        unset($spoke->nid);
        unset($spoke->vid);
        unset($spoke->path);
        $spoke->uid = $pirates_object[$pirates[array_rand($pirates)]]->uid;
        node_save($spoke);
        drush_log('SPOKE ' . url('node/' . $spoke->nid, array('absolute' => TRUE)), 'ok');
        $spokes[] = $spoke->nid;
        $reviewer = $pirates_object[$pirates[array_rand($pirates)]]->uid;
        $review = mc_drush_create_node(
          array(
            'type' => 'review',
            'title' => substr(rand(0, 1), 0, rand(8, 25)),
            'uid' => $reviewer,
            'body' => $body[rand(0, 1)],
            'pubstat' => $pubstat,
            'reviewer' => array($reviewer),
            'isreviewof' => $spoke->nid,
          )
        );
        $result = db_select('comment')->fields('comment', array('cid'))->orderRandom()->range(0, rand(2, 13))->execute();
        $cids = $result->fetchCol();
        foreach (comment_load_multiple($cids) as $comment) {
          $new_comment = (object) array(
            'nid' => $spoke->nid,
            'cid' => 0,
            'pid' => 0,
            'uid' => $pirates_object[$pirates[array_rand($pirates)]]->uid,
            'mail' => $comment->mail,
            'is_anonymous' => 0,
            'homepage' =>  $comment->homepage,
            'status' => 1,
            'subject' => $comment->subject,
            'language' => LANGUAGE_NONE,
            'thread' => 0,
            'hostname' => $comment->hostname,
            'date' => date("Y-m-j H:i:s", $comment->created),
            'comment_body' => array(
              LANGUAGE_NONE => array(
                0 => array (
                  'value' => $comment->comment_body['und'][0]['value'],
                  'format' => 'filtered_html',
                ),
              ),
            ),
          );
          comment_submit($new_comment);
          comment_save($new_comment);
        }
      }
      $wrapper->field_contributors->set($pirates_uid);
      $wrapper->field_spokes->set($spokes);
      $wrapper->field_curators_editors->set(array($node->uid));      
      $wrapper->save();    
      drush_log('HUB by ' . $object->name . ' ' . url('node/' . $node->nid, array('absolute' => TRUE)), 'ok');
    }
  }

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
  
  if (isset($config['attached_images'])) {
    $image = drush_mc_user_picture($config['attached_images']);
    $wrapper->field_attached_images->set(array(array('fid' => $image->fid)));
  }
  
  if (isset($config['representative_image'])) {
    $image = drush_mc_user_picture($config['representative_image']);
    $wrapper->field_representative_image->set(array('fid' => $image->fid));
  }  


        // field_representative_image
        // field_image_rights
        // field_taxonomy
        // field_spokes
        // field_contributors
        // field_pubstat
        // field_period
        // field_curators_editors
        // field_co_editor

  $wrapper->save();
  return $entity;
}

function drush_mc_user_picture($uri) {
  $filepath = pathinfo($uri);
  $destination_file = 'public://pictures/' . $filepath['basename'];
  $handle = fopen($uri, 'r');
  $file = file_save_data($handle, $destination_file, FILE_EXISTS_REPLACE);
  fclose($handle);
  return $file; 
}

/** Create a taxonomy term and return the tid */
function drush_mc_create_taxonomy_term($vocabulary, $term) {
  $new = new stdClass();
  $new->vid = $vocabulary->vid;
  $new->name = $term->name;
  $new->description = $term->description;
  $new->weight = $term->weight;
  $new->parent = (int)$term->parent;  
  return $new;
}

function drush_mc_kick_pirates() {
  foreach (array( 'pirate.club.1@nyu.edu', 'pirate.club.2@nyu.edu', 'pirate.club.3@nyu.edu', ) as $pirate) {
    $account = user_load_by_mail($pirate);
    if (!empty($account)) {
      $nodes = db_select('node', 'n')->fields('n', array('nid'))->condition('uid', $account->uid)->execute()->fetchCol();
      if ($nodes) {
        node_delete_multiple($nodes);
      }      
      user_delete($account->uid);
      drush_log(dt('Pirate "@pirate" kicked!', array('@pirate' =>  $pirate)), 'ok');
    }
  }
}

function drush_mc_remove_test_users() {
  drush_mc_kick_pirates();
  foreach (array(
    'mc.cluster.curator.1@nyu.edu',
    'mc.cluster.curator.2@nyu.edu',
    'mc.cluster.curator.3@nyu.edu',
    'mc.managing.editor.1@nyu.edu',
    'mc.managing.editor.2@nyu.edu',
    'mc.managing.editor.3@nyu.edu',
    'mc.contributor.1@nyu.edu',
    'mc.contributor.2@nyu.edu',
    'mc.contributor.3@nyu.edu',
    'mc.administrator.1@nyu.edu',
    'mc.administrator.2@nyu.edu',
    'mc.administrator.3@nyu.edu',
  ) as $mail) {
    $account = user_load_by_mail($mail);
    if (!empty($account)) {
      user_delete($account->uid);
      if (function_exists('drush_log')) {
        drush_log(dt('User "@name" with uid @uid removed.', array('@name' =>  $account->name, '@uid' =>  $account->uid)), 'ok');
      }
      watchdog('MediaCommons', 'User "!user" with uid !uid removed.', array('!user' => $account->name, '!uid' => $account->uid), WATCHDOG_INFO);
    }
  }
}

function drush_mc_create_pirates() {

  $organizations = taxonomy_vocabulary_machine_name_load('organizations');

  $organization = new stdClass();
  $organization->vid = $organizations->vid;
  $organization->name = "Pirate's club";
  $organization->description = "Pirate's club - Yar' sail!";
  $organization->weight = 1;
  $organization->parent = $organizations->vid;
  
  $organization_term_by_name = taxonomy_get_term_by_name($organization->name, 'organizations');

  if (!$organization_term_by_name) {
    $organization_term_by_name = taxonomy_term_save($organization);
    drush_log(dt('Term organization "@term" saved!', array('@term' => $organization->name)), 'ok');
    $organization_term_by_name = taxonomy_get_term_by_name($organization->name, 'organizations');
  }
  
  $organization = array_pop($organization_term_by_name);
  $organization = intval($organization->tid);
  
  $cities = taxonomy_vocabulary_machine_name_load('city');
  $city = new stdClass();
  $city->vid = $cities->vid;
  $city->name = "New York";
  $city->description = "New York";
  $city->weight = 1;
  $city->parent = $cities->vid;  
  $city_term_by_name = taxonomy_get_term_by_name($city->name, 'city');
  if (!$city_term_by_name) {
    $city_term_by_name = taxonomy_term_save($city);
    drush_log(dt('Term city "@term" saved!', array('@term' => $city->name)), 'ok');
    $city_term_by_name = taxonomy_get_term_by_name($city->name, 'city');
  }
  $city = array_pop($city_term_by_name);
  $city = intval($city->tid);
  $tags = taxonomy_vocabulary_machine_name_load('tags');
  $tag = new stdClass();
  $tag->vid = $tags->vid;
  $tag->name = 'sail the oceans and get rich';
  $tag->description = 'sail the oceans and get rich';
  $tag->weight = 1;
  $tag->parent = $tags->vid;
  $tag_term_by_name = taxonomy_get_term_by_name($tag->name, 'tags');
  if (!$tag_term_by_name) {
    $tag_term_by_name = taxonomy_term_save($tag);
    drush_log(dt('Term tag "@term" saved!', array('@term' => $tag->name)), 'ok');
    $tag_term_by_name = taxonomy_get_term_by_name($tag->name, 'tags');
  }
  $tag = array_pop($tag_term_by_name);
  $tag = array(intval($tag->tid));
  $pirates = array(
    'pirate.club.1' => array(
      'name' => 'pirate.club.1',
      'realname' => 'Anne Bonny',
      'mail' => 'pirate.club.1@nyu.edu',
      'init' => 'pirate.club.1@nyu.edu',
      'roles' => array(5 => true),
      'pass' => '000000',
      'status' => 1,
      'signature_format' =>	'full_html',
      'created' => 1524438746,
      'access' => 1524438746,
      'login' => 1524438746,      
      'picture' => __DIR__ . '/assets/images/m1.jpg',
      'bio' => "Anne Bonny was a strong, independent woman, who was way ahead of her time. The 18th century was still a time when man made all important decisions, a time when women did not have many rights. In this men's world, it was hard for Anne Bonny to become an equal crewmember and a respected pirate.",
      'phone' => '787-764-0000',
      'title' => 'Pirate',
      'first_name' => 'Anne',
      'last_name' => 'Bonny',
      'country' => intval(12340),
      'state' => intval(12621),
      'city' => $city,
      'tag' => $tag,
      'organization' => $organization,
      'plan' => "No man to talk of breaking up their way of living, till each had shared one thousand pounds. If in order to this, any man should lose a limb, or become a cripple in their service, he was to have eight hundred dollars, out of the public stock, and for lesser hurts, proportionately.",
    ),
    'pirate.club.2' => array(
      'name' => 'pirate.club.2',
      'realname' => 'Henry Avery',
      'mail' => 'pirate.club.2@nyu.edu',
      'init' => 'pirate.club.2@nyu.edu',
      'roles' => array(5 => true),
      'pass' => '000000',
      'status' => 1,
      'signature_format' =>	'full_html',
      'created' => 1524438746,
      'access' => 1524438746,
      'login' => 1524438746,      
      'picture' => __DIR__ . '/assets/images/m2.jpg',
      'bio' => "The world's most successful pirate—and its most wanted man.",
      'phone' => '787-764-0000',
      'title' => 'Pirate',
      'first_name' => 'Henry',
      'last_name' => 'Avery',
      'country' => intval(12340),
      'state' => intval(12621),
      'city' => $city,
      'tag' => $tag,
      'organization' => $organization,
      'plan' => "No person to game at cards or dice for money.",
    ),
    'pirate.club.3' => array(
      'name' => 'pirate.club.3',
      'realname' => 'Edward Teach, better known as Blackbeard',
      'mail' => 'pirate.club.3@nyu.edu',
      'init' => 'pirate.club.3@nyu.edu',
      'roles' => array(5 => true),
      'pass' => '000000',
      'status' => 1,
      'signature_format' =>	'full_html',
      'created' => 1524438746,
      'access' => 1524438746,
      'login' => 1524438746,      
      'picture' => __DIR__ . '/assets/images/m3.jpg',
      'bio' => "As the sun sank low in the sky, someone spotted sails bearing down on their sternz. Someone spotted Blackbeard.",
      'phone' => '787-764-0000',
      'title' => 'Pirate',
      'first_name' => 'Henry',
      'last_name' => 'Avery',
      'country' => intval(12340),
      'state' => intval(12621),
      'city' => $city,
      'tag' => $tag,
      'organization' => $organization,
      'plan' => "If any Man shall offer to run away, or keep any Secret from the Company, he shall be marooned with one Bottle of Powder, one Bottle of Water, one small Arm, and Shot.",
    ),    
  );

  foreach ($pirates as $username => $pirate) {
    
    try {

      $account = user_load_by_mail($pirate['mail']);

      if (empty($account)) {
        
        // https://api.drupal.org/api/drupal/modules!user!user.module/function/user_save/7.x
        $account = user_save(null, $pirate);

        drush_log(dt('Pirate @user created', array ('@user' => $pirate['name'])), 'ok');

      }
      
      if ($account) {

        $account->picture = drush_mc_user_picture($pirate['picture']);

        /** Update realname module */
        $account->realname = $pirate['realname'];
        // Save to the database and the static cache.
        db_merge('realname')->key(array('uid' => $account->uid))->fields(array('realname' => $account->realname, 'created' => REQUEST_TIME))->execute();
        // Allow modules to react to the realname being updated.
        module_invoke_all('realname_update', $account->realname, $account);

        /**
         * Wrapp user account with an entity metadata wrappers
         * see: https://www.drupal.org/documentation/entity-metadata-wrappers
         */
        $wrapper = entity_metadata_wrapper('user', $account);

        $wrapper->field_profile_name->set($pirate['realname']);
        
        $wrapper->field_bio->set(array('value' => $pirate['bio'], 'format' => 'filtered_html'));

        $wrapper->field_skype->set($username);

        $wrapper->field_aim->set($username);

        $wrapper->field_twitter->set($username);

        $wrapper->field_phone->set($pirate['phone']);

        $wrapper->field_email->set($pirate['mail']);

        $wrapper->field_title->set($pirate['title']);

        $wrapper->field_last_name->set($pirate['last_name']);

        $wrapper->field_first_name->set($pirate['first_name']);

        $wrapper->field_url->set(array('url' => 'http://example.com/' . $username));

        $wrapper->field_plan->set(array('value' => $pirate['plan'], 'format' => 'filtered_html'));

        $wrapper->field_organization->set($pirate['organization']);

        $wrapper->field_city->set($pirate['city']);

        $wrapper->field_state->set($pirate['state']);

        $wrapper->field_country->set($pirate['country']);

        $wrapper->field_taxonomy->set($pirate['tag']);

        drush_log(dt('Pirate @user profile saved.', array ('@user' => $pirate['name'])), 'ok');

        $wrapper->save();

      }
    }
    catch (Exception $e) {
      drush_log(dt('Caught exception: @exception' , array('@exception' => $e->getMessage())), 'error');
      if ($account) {
        drush_log(dt('Error migrating user @user', array ('@user' => $pirate['name'])), 'error');
        user_delete($account->uid);
      }    
    }

  }

}
