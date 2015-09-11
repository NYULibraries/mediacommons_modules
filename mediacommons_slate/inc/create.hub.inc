<?php

function create_hub ( array $old_node ) {

  /**
   * This node default configuration
   */
  $new_node = mediacommons_slate_setup_node ( 'hub' ) ;

  /**
   * Prepare node
   */
  $old_node = (object) $old_node ;

  $new_node->title = $old_node->title ;

  $new_node->uid = $old_node->uid ;

  $new_node->language = LANGUAGE_NONE ;

  $new_node->date = $old_node->date ;

  $new_node->status = $old_node->status ;

  $new_node->promote = $old_node->promote ;

  $new_node->moderate = $old_node->moderate ;

  $new_node->sticky = $old_node->sticky ;

  /** add description */
  $new_node->field_body[$new_node->language][0] = array (
    'value' => $old_node->field_body,
    'format' => 'filtered_html',
  ) ;

  /** Contributors */
  if ( isset ( $old_node->field_contributors ) ) {
  	$new_node->field_contributors = array ( ) ;
    foreach ( $old_node->field_contributors as $key => $contributors ) {
      $new_node->field_contributors[$old_node->language][$key] = array ( 'uid' => $uid, '_weight' => $key ) ;
    }
  }

  /** spokes */
  $new_node->field_spokes = array() ;

  if ( isset ( $old_node->field_spokes ) ) foreach ( $old_node->field_spokes as $key => $nid ) $new_node->field_spokes[$old_node->language][$key]['nid'] = $nid ;

  /** dates */
  if ( isset ( $old_node->field_period_1 ) ) {
    $new_node->field_period[$old_node->language][0]['value'] = $old_node->field_period_1;
  }

  if ( isset ( $old_node->field_period_2 ) ) {
    $new_node->field_period[$old_node->language][0]['value2'] = $old_node->field_period_2;
  }

  /** attached representative image */
  if ( isset ( $old_node->field_representative_image ) ) {
    $new_node->field_representative_image[$old_node->language][] = (array) file_load ( $old_node->field_representative_image ) ;
  }

  /** pubstat */
  if ( isset ( $old_node->field_pubstat ) ) {
    $new_node->field_pubstat[$old_node->language][0] = array( 'value' => $old_node->field_pubstat ) ;
  }

  /** save node */
  if ( $new_node = node_submit ( $new_node ) ) node_save ( $new_node ) ;

}

function mediacommons_slate_create_hubs ( ) {

  $number_of_hubs = 11;
	
  module_load_include('inc', 'mediacommons_slate', 'inc/create') ;

	$nodes = array ( ) ;

	$spokes = array ( ) ;

	$users = array ( ) ;

	$files = array ( ) ;

	foreach ( db_query ( 'SELECT nid FROM node WHERE type = :type', array ( ':type' => 'spoke' ) ) as $spoke ) $spokes[] = $spoke->nid ;

	foreach ( db_query ( 'SELECT uid FROM users WHERE uid <> 1 AND uid <> 0', array (  ) ) as $user ) $users[] = $user->uid ;

	foreach ( db_query ( 'SELECT fid FROM file_managed', array ( ) ) as $file ) $files[] = $file->fid ;

	for ( $i = 1 ; $i < $number_of_hubs ; $i++ ) {

		$old_node = array (
		  'title' => mediacommons_slate_body_title ( ) ,
			'uid' => $users [ array_rand ( $users ) ],
			'language' => LANGUAGE_NONE,
			'date' => date ( 'Y-m-d H:i:s', strtotime ( 'now' ) ) ,
			'status' => NODE_PUBLISHED,
			'promote' => NODE_NOT_PROMOTED,
			'moderate' => 0,
			'sticky' => NODE_NOT_STICKY,
			'position' => 2,
			'field_body' => mediacommons_slate_body_text ( ) ,
			'field_spokes' => array_rand ( $spokes , 8 ),
			'field_pubstat' => 1,
      'field_period_1' => strtotime ( '+' . $i . ' week' ) ,
      'field_period_2' => strtotime ( '+' . $i + 1 . ' week' ) ,
		  // 'field_contributors' => array_rand ( $users , 2 ),
			'field_representative_image' => $files [ array_rand ( $files ) ],
			'field_curators_editors' => array_rand ( $users , 2 ),
			'field_co_editor' => $users [ array_rand ( $users ) ],
		) ;

		create_hub ( $old_node ) ;

	}

}
