<?php

function mediacommons_editorialworkflow_theme_registry_alter(&$theme_registry) {
  $project = variable_get('mediacommons_project', 'mediacommons');
  if ($project === 'mediacommons') return;
  $theme_registry['link']['function'] = 'mediacommons_editorialworkflow_link';
  // do we want to unset gravatar_preprocess_user_picture, we are taking over that function ...
  $theme_registry['user_picture']['preprocess functions'][] = 'mediacommons_editorialworkflow_user_picture';
}

function mediacommons_editorialworkflow_preprocess_button(&$variables) {
  global $user;
  if (isset($user->contribute)) {
    $element = &$variables['element'];
    // disable submit button
    if (
    		1 == 2 &&
        $element['#type'] == 'submit' /** submit buttons */
        &&
        isset( $user->contribute['current_nid'] ) /** is a node */
        &&
        $user->uid != $user->contribute['current_uid'] /** not the primary contributor */
    		&& ! in_array('administrator', $user->roles) /** not an administrator */
    ) {
    	if ( ! in_array ( $user->contribute['current_nid'], $user->contribute['spokes_can_contribute'] ) /** not a additional contributor */ ) {
       $element['#attributes'] = array(
          'disabled' => 'disabled',
          'class' => array('no-contributor-permission element-invisible')
       );
      }
    }
    if (isset($element['#value']) && isset($element['#name'])) {
      switch ($element['#name']) {
        case 'field_contributed_piece_add_more' :
          $element['#value'] = t('Add another spoke');
          break;
        case 'field_contributors_add_more' :
          $element['#value'] = t('Add another contributor');
          break;
        case 'field_clusters_add_more' :
          $element['#value'] = t('Add another hub');
          break;
      }
    }
  }
}

function mediacommons_editorialworkflow_preprocess_container(&$variables) {
  global $user;
  if (isset($user->contribute)) {
    $element = &$variables['element'];
    if (isset($element['#id'])) {
      switch ($element['#id']) {
        case 'edit-field-mbed' :
        case 'edit-field-representative-image' :
          $element['#attributes']['class'][] = 'invisible-element';
          break;
      }
    }
  }
}

function mediacommons_editorialworkflow_preprocess_textfield(&$variables) {
  $element = &$variables['element'];
  if (isset($element['#name']) && $element['#name'] == 'title') {
    $element['#attributes']['placeholder'] = t('Untitled');
  }
}

function mediacommons_editorialworkflow_preprocess_checkbox(&$variables) {

  global $user;

  /**
   * User is coming with a is_contributor flag; the flag is the nid (int)
   * of a known hub.
   */
  $is_contributor_flag = isset($_GET['is_contributor']) ? (int)$_GET['is_contributor'] : 0;

  if (
    isset($user->contribute)
    && !in_array('administrator', $user->roles)
  ) {

    $element = &$variables['element'];

    if (
      isset($element['#parents']) // check if is set
      && isset($element['#parents'][0]) // has parent
      && $element['#parents'][0] == 'field_part_of' // is a reference to a hub
    ) {
      /** user have permission to add piece to this cluster */
      if (isset($element['#return_value']) ) {

        if (!in_array($element['#return_value'], $user->contribute['hubs_can_contribute'])) {
          $element['#attributes'] = array(
            'disabled' => 'disabled',
            'class' => array('no-contributor-permission')
          );
        }
        elseif ($element['#return_value'] == $is_contributor_flag) {
          $element['#attributes'] = array(
            'checked' => 'checked',
            'class' => array('set-as-contribute-pieces')
          );
        }
      }


      /** if is already checked and user is not the cluster manager; disable the field and mark as read-only */
      if ($element['#checked']) {
        $element['#attributes'] = array(
          'disabled' => 'disabled',
          'class' => array('disabled')
        );
      }
    }
  }
}
