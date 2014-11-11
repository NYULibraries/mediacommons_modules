<?php
/**
 * @file
 * mc_front_page_post_display.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mc_front_page_post_display_default_fe_block_settings() {
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
      'mediacommons' => array(
        'region' => 'homepage_top',
        'status' => 1,
        'theme' => 'mediacommons',
        'weight' => -18,
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

  $export['views-homepage_featured_posts-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'homepage_featured_posts-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'mediacommons' => array(
        'region' => 'homepage_bottom',
        'status' => 1,
        'theme' => 'mediacommons',
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

  $export['views-nodequeue_3-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nodequeue_3-block',
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

  $export['views-previous_hubs-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'previous_hubs-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'mediacommons' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons',
        'weight' => -18,
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

  $export['views-simple_for_survey-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'simple_for_survey-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'mediacommons' => array(
        'region' => 'homepage_sidebar',
        'status' => 1,
        'theme' => 'mediacommons',
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
