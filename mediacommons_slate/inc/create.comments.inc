<?php

function mediacommons_slate_create_comments ( ) {

	module_load_include('inc', 'mediacommons_slate', 'inc/create') ;

	$spokes = array ( ) ;

	$users = array ( ) ;

	foreach ( db_query ( 'SELECT nid FROM node WHERE type = :type', array ( ':type' => 'spoke' ) ) as $spoke ) $spokes[] = $spoke->nid ;

	foreach ( db_query ( 'SELECT uid FROM users WHERE uid <> 1 AND uid <> 0', array (  ) ) as $user ) $users[] = $user->uid ;

	foreach ( $spokes as $spoke ) {
		for ( $i = 1 ; $i < 4 ; $i++ ) {
			$user = user_load ( $users[ array_rand ( $users ) ] ) ;
		  $new_comment = (object) array (
		    'nid' => $spoke,
			  'cid' => 0,
			  'pid' => 0,
			  'uid' => $user->uid,
			  'mail' => $user->mail,
			  'is_anonymous' => 0,
			  'homepage' =>  'http://example.com',
			  'status' => 1,
			  'subject' => mediacommons_slate_body_title ( ) ,
			  'language' => LANGUAGE_NONE,
			  'hostname' => ip_address(),
			  'date' => date ( 'Y-m-d H:i:s', strtotime ( 'now' ) ) ,
			  'comment_body' => array(
			    LANGUAGE_NONE => array(
				    0 => array (
					    'value' => mediacommons_slate_body_text ( ) ,
						  'format' => 'limited_html',
				    ),
				  ),
			  ),
		  ) ;

		  comment_submit ( $new_comment ) ;

		  comment_save ( $new_comment ) ;

    }
  }
}
