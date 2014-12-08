<?php
/**
 * @file
 * mediacommons_ds_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mediacommons_ds_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-82d8a75bde4ff36a1c89b3fb77664e68'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '82d8a75bde4ff36a1c89b3fb77664e68',
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

  $export['views-list_of_all_hubs-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'list_of_all_hubs-block',
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
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-this_spokes_parent_hub-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'this_spokes_parent_hub-block',
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
