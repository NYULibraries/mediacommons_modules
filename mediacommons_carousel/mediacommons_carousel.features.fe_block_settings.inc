<?php
/**
 * @file
 * mediacommons_carousel.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mediacommons_carousel_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-homepage_carousel-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'homepage_carousel-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mediacommons' => array(
        'region' => 'homepage_top',
        'status' => 1,
        'theme' => 'mediacommons',
        'weight' => -14,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
