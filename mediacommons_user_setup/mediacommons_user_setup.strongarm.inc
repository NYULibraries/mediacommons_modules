<?php
/**
 * @file
 * mediacommons_user_setup.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mediacommons_user_setup_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_pattern';
  $strongarm->value = '[user:field_profile_name]';
  $export['realname_pattern'] = $strongarm;

  return $export;
}
