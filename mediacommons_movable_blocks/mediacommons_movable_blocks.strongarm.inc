<?php
/**
 * @file
 * mediacommons_movable_blocks.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mediacommons_movable_blocks_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_mediacommons_settings';
  $strongarm->value = array(
    'zen_rebuild_registry' => 0,
    'zen_wireframes' => 0,
    'special_body_class' => 'imr',
  );
  $export['theme_mediacommons_settings'] = $strongarm;

  return $export;
}
