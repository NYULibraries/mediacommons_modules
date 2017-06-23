<?php
/**
 * @file
 * mediacommons_homepage_umbrella.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mediacommons_homepage_umbrella_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['mediacommons_blocks-mc_fieldguide'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'mc_fieldguide',
    'module' => 'mediacommons_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'mediacommons' => array(
        'region' => 'umb_homepage_sidebar',
        'status' => 1,
        'theme' => 'mediacommons',
        'weight' => -16,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -17,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-mc_home_lede-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'mc_home_lede-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'mediacommons' => array(
        'region' => 'umb_homepage_top',
        'status' => 1,
        'theme' => 'mediacommons',
        'weight' => 0,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['views-nodequeue_2-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nodequeue_2-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'mediacommons' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons',
        'weight' => 0,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['views-recent_6_front_page_posts-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'recent_6_front_page_posts-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'mediacommons' => array(
        'region' => 'umb_homepage_bottom',
        'status' => 1,
        'theme' => 'mediacommons',
        'weight' => 0,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
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
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}