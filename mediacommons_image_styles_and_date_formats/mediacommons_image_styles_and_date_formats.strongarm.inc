<?php
/**
 * @file
 * mediacommons_image_styles_and_date_formats.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mediacommons_image_styles_and_date_formats_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_long_no_time';
  $strongarm->value = 'l, F j, Y';
  $export['date_format_long_no_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short_no_time';
  $strongarm->value = 'n/j/Y';
  $export['date_format_short_no_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = '1';
  $export['user_pictures'] = $strongarm;

  return $export;
}
