<?php

/**
 * @file
 * Admin page.
 */
function mediacommons_filter_admin($form, &$form_state) {

	$result = db_query("SELECT * FROM {mediacommons_filter}");

  $form['sources'] = array(
    '#type' => 'fieldset',
    '#title' => t('Add or edit allowed domains in an iframe'),
    '#collapsed' => FALSE,
    '#collapsible' => TRUE,
  );

  foreach ( $result as $record ) {
    $form['sources']['sources_u_' . $record->did] = array(
      '#type' => 'textfield',
      '#title' => t('Allowed domain'),
      '#default_value' => $record->domain,
      '#size' => 60,
      '#maxlength' => 256,
      '#description' => t("Set host name. <acronym title=\"for example\">e.g.</acronym>, nyu.edu"),
      '#required' => FALSE,
    );
  }

  $form['sources']['sources_n_1'] = array(
  	'#type' => 'textarea',
  	'#title' => t('Add more allowed domain'),
  	'#description' => t("Set domains. <acronym title=\"for example\">e.g.</acronym>, nyu.edu, example.com"),
    '#required' => FALSE,
  );

  $form['#submit'][] = 'mediacommons_filter_admin_settings_submit';

  return system_settings_form ( $form ) ;
}

/**
 * Form submit handler for mediacommons_filter admin settings form.
 */
function mediacommons_filter_admin_settings_submit ( $form, &$form_state ) {

  $result = db_query("SELECT * FROM {mediacommons_filter}");

  $domains = array();

  $cache = array();

  foreach ( $result as $record ) {
  	$domains[$record->did] = $record->domain ;
  }

  foreach ( $form_state['values'] as $key => $value )  {

  	$value = trim( filter_xss( $value ) ) ;

  	preg_match( '/sources_([un]{1})_([0-9]+)/', $key, $matches);

	  if ( $matches ) {
	  switch ( $matches[1] ) {
	    case 'n':

	    	$new_domains = explode(",", $value) ;

	  	  foreach ( $new_domains as $new_domain ) {

	  	  	$new_domain = parse_url ( trim ( $new_domain ) ) ;

	  	  	if ( isset ( $new_domain['host'] ) && ! empty ( $value ) && ! in_array( $new_domain['host'] , $domains ) ) {

	  	  		$cache[] = $new_domain['host'] ;

            db_insert('mediacommons_filter')->fields( array('domain' => $new_domain['host'], ) )->execute();

	  	  	}
	  	  }
          break;
	  	case 'u':
	  	  if ( empty ( $value ) ) {
	  	  	db_delete('mediacommons_filter')->condition('did', $matches[2])->execute();
	  	  }
	  	  elseif ( $value != $domains[$matches[2]] ) {
	  	  	db_update('mediacommons_filter')->fields( array( 'domain' => $value, ) )->condition('did', $matches[2], '=')->execute();
	  	  }
	  	  else {
	  	  	$cache[] = $value;
	  	  }
	  	  break;
	  }
    }
  }

  cache_set('domains', $cache, 'cache_mediacommons_filter');

}
