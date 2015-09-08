<?php

function mediacommons_slate_fake_user ( ) {

	require_once DRUPAL_ROOT . '/' . variable_get('password_inc', 'includes/password.inc') ;

	$id = uniqid () ;

	return (object) array (
			'name' => $id,
			'pass' => 'U' . user_hash_password ( 'U$S$9nRqS/zEXtVPKQ6kRpfh/CV0HH1xPc7eZO7DcDNSpwK3vkEFLzVt', 11 ),
			'mail' => $id . '@nyu.edu',
			'init' => $id . '@nyu.edu',
			'status' => 1,
			'access' => REQUEST_TIME,
			'theme' => NULL,
			'signature' => NULL,
			'signature_format' => 0,
			'created' => REQUEST_TIME,
			'login' => REQUEST_TIME,
			'language' => 'en',
			'timezone_name' => 0,
	  ) ;

}

function _mediacommons_slate_fake_users ( ) {

  for ( $i = 0 ; $i < 10 ; $i++ ) {

  	$files = array ( ) ;

  	foreach ( db_query('SELECT fid FROM file_managed', array ( ) ) as $file ) $files[] = $file->fid ;

  	$fid = $files[ array_rand ( $files ) ] ;

  	$country = mediacommons_slate_taxonomy_country ( ) ;

  	$state = mediacommons_slate_taxonomy_state ( ) ;

  	$city = mediacommons_slate_taxonomy_city ( ) ;

  	$first_name = mediacommons_slate_taxonomy_first_name ( ) ;

  	$last_name = mediacommons_slate_taxonomy_last_name ( ) ;

  	$organization = mediacommons_slate_taxonomy_organizations () ;

    $user = user_save ( mediacommons_slate_fake_user ( ) , array ( ) ) ;

  	$user->field_profile_name[LANGUAGE_NONE][0]['value'] = $first_name ;

  	$user->field_first_name[LANGUAGE_NONE][0]['value'] = $first_name ;

  	$user->field_last_name[LANGUAGE_NONE][0]['value'] = $last_name ;

  	$user->field_bio[LANGUAGE_NONE][0]['value'] = mediacommons_slate_body_text ( ) ;

  	$user->field_plan[LANGUAGE_NONE][0]['value'] = mediacommons_slate_body_text ( ) ;

  	$user->field_aim[LANGUAGE_NONE][0]['value'] = uniqid () ;

  	$user->field_twitter[LANGUAGE_NONE][0]['value'] = uniqid () ;

  	$user->field_skype[LANGUAGE_NONE][0]['value'] = uniqid () ;

  	$user->field_title[LANGUAGE_NONE][0]['value'] = mediacommons_slate_taxonomy_title () ;

  	$user->field_url[LANGUAGE_NONE][0]['url'] = 'http://www.example.com' ;

  	$user->field_phone[LANGUAGE_NONE][0]['value'] = rand ( 1111111111, 9999999999 ) ;

  	$user->field_email[LANGUAGE_NONE][0]['email'] = $user->mail ;

  	$user->field_country[LANGUAGE_NONE][0]['tid'] = $country->tid ;

  	$user->field_state[LANGUAGE_NONE][0]['tid'] = $state->tid ;

  	$user->field_city[LANGUAGE_NONE][0]['tid'] = $city->tid ;

  	$user->field_organization[LANGUAGE_NONE][0]['tid'] = $organization->tid ;

  	user_save ( $user, array ( ) ) ;

  	db_update('users')->fields ( array( 'picture' => $fid, ) )->condition('uid', $user->uid )->execute() ;

  	$users[] = $user ;

  }

}
