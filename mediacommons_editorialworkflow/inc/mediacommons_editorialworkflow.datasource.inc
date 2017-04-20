<?php

function mediacommons_editorialworkflow_contributor() {
	global $user;
	$mediacommons_editorialworkflow_contributor = &drupal_static(__FUNCTION__, array());
	$field = field_info_instances('node');
	/** If content-type HUB or SPOKE exist and field_contributors exist in any of the 2 types continue */
	if ((isset($field['hub']) && isset($field['hub']['field_contributors'])) || (isset($field['spoke']) && isset($field['spoke']['field_contributors']))) {
    $query = new EntityFieldQuery;
    $result = $query
              ->entityCondition('entity_type', 'node')
              ->fieldCondition('field_contributors', 'uid', $user->uid, '=')
              ->execute();
    if (isset($result['node'])) {
      $mediacommons_editorialworkflow_contributor = array_keys($result['node']);
    }
	}
  return $mediacommons_editorialworkflow_contributor;
}

function mediacommons_editorialworkflow_hubs_user_can_contribute() {
  global $user;
	$field = field_info_instances('node');
  $hubs_user_can_contribute = &drupal_static(__FUNCTION__, array());
	/** If content-type HUB or SPOKE exist and field_contributors exist in any of the 2 types continue */
	if ((isset($field['hub']) && isset($field['hub']['field_contributors']))) {
    $query = new EntityFieldQuery;
    $result = $query
                ->entityCondition('entity_type', 'node')
                ->entityCondition('bundle', 'hub')
                ->fieldCondition('field_contributors', 'uid', $user->uid, '=')
                ->execute();
    if (isset($result['node'])) {
      $hubs_user_can_contribute = array_keys($result['node']);
    }
  }
  return $hubs_user_can_contribute;
}

