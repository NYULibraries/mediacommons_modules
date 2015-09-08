<?php

function create_spoke ( array $old_node ) {

  /**
   * Files folder real path
   */
  $dupal_file_path = drupal_realpath('public://');

  /**
   * This node default configuration
   */
  $new_node = mediacommons_slate_setup_node ( 'spoke' ) ;

  /**
   * Prepare node
   */
  $old_node = (object) $old_node ;

  $new_node->title = $old_node->title;

  $new_node->uid = $old_node->uid;

  $new_node->language = $old_node->language;

  $new_node->date = $old_node->date;

  $new_node->status = $old_node->status;

  $new_node->promote = $old_node->promote;

  $new_node->moderate = $old_node->moderate;

  $new_node->sticky = $old_node->sticky;

  if ( isset ( $old_node->field_body ) ) {
    $new_node->field_body[$new_node->language][0] = array ( 'value' => $old_node->field_body, 'format' => 'filtered_html' ) ;
  }

  if ( isset ( $old_node->field_embed ) ) {
  	$new_node->field_embed[$new_node->language][0] = array ( 'value' => $old_node->field_embed, 'format' => 'filtered_html' ) ;
  }

  /** attached representative image */
  if ( isset ( $old_node->field_attached_images_ri ) ) {
    $new_node->field_attached_images[$new_node->language][] = (array) file_load ( $old_node->field_attached_images_ri ) ;
  }

  /** attached all other images */
  if ( isset ( $old_node->field_attached_images ) ) {
    foreach ( $old_node->field_attached_images as $image ) {
      $new_node->field_attached_images[$new_node->language][] = (array) file_load ( $image ) ;
    }
  }

  /** Tags */
  //$new_node->field_tags[$new_node->language][] = array('tid' => $tag);

  if ( isset ( $old_node->field_part_of ) ) {
    foreach ( (array) $old_node->field_part_of as $part_of ) {
      $new_node->field_part_of[$new_node->language][0]['nid'] = $nid ;
    }
  }

  /**
   * Contributors 2 steps
   * 1. Add the author of the spoke as a contributor
   * 2. If we have contributors, add them to the field
   */
  $new_node->field_contributors = array (
    $new_node->language => array(),
  );

  /**
   * Step 1. The author is always the first contributor (at least for the migration)
  */
  $new_node->field_contributors[$new_node->language][0] = array (
    'uid' => $new_node->uid,
    '_weight' => 0,
  ) ;

  if ( isset ( $old_node->field_contributors ) ) {
    foreach ( $old_node->field_contributors as $key => $contributor ) {
      $new_node->field_contributors[$old_node->language][] = array (
        'uid' => $contributor,
        '_weight' => (int) $key,
      ) ;
    }
  }

  $new_node->field_pubstat[$old_node->language][0] = array ( 'value' => $old_node->field_pubstat ) ;

  /**
   * Prepare node for saving
   */
  if ( $new_node = node_submit ( $new_node ) ) {

  	node_save ( $new_node ) ;

  	return $new_node->nid ;

  }

}

function mediacommons_slate_create_spokes ( ) {

	module_load_include('inc', 'mediacommons_slate', 'inc/create') ;

	$nodes = array ( ) ;

	$users = array ( ) ;

	$files = array ( ) ;

	$attached_images = array ( ) ;

	foreach ( db_query('SELECT uid FROM users', array ( ) ) as $user ) $users[] = $user->uid ;

	foreach ( db_query('SELECT fid FROM file_managed', array ( ) ) as $file ) $files[] = $file->fid ;

	for ( $i = 0 ; $i < 15 ; $i++ ) {

		$uid = $users[ array_rand ( $users ) ] ;

		$contibutors = array ( ) ;

		if ( $uid == 0 ) $uid  = 1 ;

		foreach ( array_rand ( $users , 3 ) as $value ) {
			if ( $users[$value] == 0 ) $users[$value] = 1 ;
			$contibutors[] = $users[$value] ;
		}

		$attached_images_ri = $files[ array_rand ( $files ) ] ;

		foreach ( array_rand ( $files , 3 ) as $value ) $attached_images[] = $files[ $value ] ;

		$old_node = array (
				'title' => mediacommons_slate_body_title ( ) ,
				'uid' => $uid,
				'language' => LANGUAGE_NONE,
				'date' => date('Y-m-d H:i:s', strtotime('now')),
				'status' => NODE_PUBLISHED,
				'promote' => NODE_NOT_PROMOTED,
				'moderate' => 0,
				'sticky' => NODE_NOT_STICKY,
				'position' => 2,
				'field_contributors' => $contibutors,
				'field_pubstat' => NODE_PUBLISHED,
				'field_body' => mediacommons_slate_body_text ( ) ,
				'field_embed' => mediacommons_slate_embed_text ( ) ,
				'field_attached_images' => $attached_images,
				'field_attached_images_ri' => $attached_images_ri,
				'field_tags' => array ( ),
				'field_part_of' => array ( ),
		) ;

		$nodes[] = create_spoke ( $old_node ) ;

	}

	return $nodes ;

}
