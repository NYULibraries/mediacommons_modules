<?php
/**
 * @file
 * umbrella_recent_6_fpp.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function umbrella_recent_6_fpp_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-recent_6_front_page_posts-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'recent_6_front_page_posts-block',
    'module' => 'views',
    'node_types' => array(),
    'options' => NULL,
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
        'region' => 'homepage_bottom',
        'status' => 1,
        'theme' => 'mediacommons',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
