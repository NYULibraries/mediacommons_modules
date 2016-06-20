<?php
/**
 * @file
 * mediacommons_movable_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mediacommons_movable_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views--exp-tags-tag_page'] = array(
    'cache' => -1,
    'delta' => '-exp-tags-tag_page',
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
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
  );

  $export['views-contributors_this_hub-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'contributors_this_hub-block',
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
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'mediacommons',
        'weight' => -20,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
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

  $export['views-mc_recent_comments-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'mc_recent_comments-block',
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
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'mediacommons',
        'weight' => -19,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
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

  $export['views-tags-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'tags-block',
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
        'region' => 'homepage_sidebar',
        'status' => 1,
        'theme' => 'mediacommons',
        'weight' => -20,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
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

  $export['views-top_organizations-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'top_organizations-block',
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
        'region' => 'homepage_sidebar',
        'status' => 1,
        'theme' => 'mediacommons',
        'weight' => -19,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
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
