<?php
/**
 * @file
 * mc_global_nav.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mc_global_nav_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-mcglobalnav'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-mcglobalnav',
    'module' => 'menu',
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
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons',
        'weight' => 0,
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
