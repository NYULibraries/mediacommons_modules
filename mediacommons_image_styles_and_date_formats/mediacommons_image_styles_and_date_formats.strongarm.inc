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
  $strongarm->name = 'imagefield_crop_info';
  $strongarm->value = array(
    22 => array(
      'x' => '0',
      'y' => '0',
      'width' => '450',
      'height' => '175',
    ),
    25 => array(
      'x' => '0',
      'y' => '0',
      'width' => '450',
      'height' => '175',
    ),
    27 => array(
      'x' => '0',
      'y' => '0',
      'width' => '450',
      'height' => '175',
    ),
    29 => array(
      'x' => '0',
      'y' => '-189',
      'width' => '800',
      'height' => '500',
    ),
    31 => array(
      'x' => '0',
      'y' => '-189',
      'width' => '800',
      'height' => '500',
    ),
    33 => array(
      'x' => '0',
      'y' => '0',
      'width' => '450',
      'height' => '175',
    ),
    35 => array(
      'x' => '0',
      'y' => '0',
      'width' => '800',
      'height' => '500',
    ),
    37 => array(
      'x' => '0',
      'y' => '0',
      'width' => '849',
      'height' => '330',
    ),
    39 => array(
      'x' => '102',
      'y' => '60',
      'width' => '829',
      'height' => '322',
    ),
    41 => array(
      'x' => '0',
      'y' => '-78',
      'width' => '800',
      'height' => '500',
    ),
    43 => array(
      'x' => '0',
      'y' => '21',
      'width' => '449',
      'height' => '174',
    ),
    45 => array(
      'x' => '0',
      'y' => '0',
      'width' => '449',
      'height' => '174',
    ),
    47 => array(
      'x' => '0',
      'y' => '0',
      'width' => '450',
      'height' => '175',
    ),
    49 => array(
      'x' => '0',
      'y' => '0',
      'width' => '450',
      'height' => '175',
    ),
    51 => array(
      'x' => '0',
      'y' => '0',
      'width' => '449',
      'height' => '174',
    ),
    54 => array(
      'x' => '0',
      'y' => '39',
      'width' => '1000',
      'height' => '390',
    ),
    57 => array(
      'x' => '0',
      'y' => '0',
      'width' => '450',
      'height' => '175',
    ),
    58 => array(
      'x' => '0',
      'y' => '0',
      'width' => '800',
      'height' => '500',
    ),
    53 => array(
      'x' => '0',
      'y' => '0',
      'width' => '449',
      'height' => '174',
    ),
    62 => array(
      'x' => '0',
      'y' => '0',
      'width' => '1000',
      'height' => '390',
    ),
    64 => array(
      'x' => '0',
      'y' => '188',
      'width' => '771',
      'height' => '297',
    ),
    66 => array(
      'x' => '0',
      'y' => '0',
      'width' => '450',
      'height' => '175',
    ),
    68 => array(
      'x' => '63',
      'y' => '53',
      'width' => '824',
      'height' => '319',
    ),
    70 => array(
      'x' => '0',
      'y' => '-3',
      'width' => '800',
      'height' => '500',
    ),
    77 => array(
      'x' => '0',
      'y' => '0',
      'width' => '450',
      'height' => '175',
    ),
    80 => array(
      'x' => '0',
      'y' => '0',
      'width' => '449',
      'height' => '174',
    ),
    83 => array(
      'x' => '0',
      'y' => '0',
      'width' => '450',
      'height' => '175',
    ),
    86 => array(
      'x' => '0',
      'y' => '24',
      'width' => '1000',
      'height' => '390',
    ),
    88 => array(
      'x' => '237',
      'y' => '313',
      'width' => '612',
      'height' => '237',
    ),
    90 => array(
      'x' => '0',
      'y' => '0',
      'width' => '1001',
      'height' => '389',
    ),
    92 => array(
      'x' => '0',
      'y' => '405',
      'width' => '452',
      'height' => '176',
    ),
    94 => array(
      'x' => '350',
      'y' => '399',
      'width' => '450',
      'height' => '175',
    ),
    96 => array(
      'x' => '0',
      'y' => '147',
      'width' => '1000',
      'height' => '391',
    ),
    98 => array(
      'x' => '7',
      'y' => '134',
      'width' => '628',
      'height' => '244',
    ),
    100 => array(
      'x' => '0',
      'y' => '0',
      'width' => '450',
      'height' => '175',
    ),
    102 => array(
      'x' => '0',
      'y' => '0',
      'width' => '450',
      'height' => '175',
    ),
    106 => array(
      'x' => '0',
      'y' => '78',
      'width' => '449',
      'height' => '174',
    ),
    108 => array(
      'x' => '0',
      'y' => '24',
      'width' => '904',
      'height' => '351',
    ),
    110 => array(
      'x' => '0',
      'y' => '0',
      'width' => '452',
      'height' => '176',
    ),
  );
  $export['imagefield_crop_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = '1';
  $export['user_pictures'] = $strongarm;

  return $export;
}
