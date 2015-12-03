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

  $export['block-fieldguide_toc_html'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'fieldguide_toc_html',
    'module' => 'block',
    'node_types' => array(),
    'options' => 'a:1:{s:10:"attributes";a:1:{s:5:"class";a:1:{i:0;s:14:"fieldguide_toc";}}}',
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

  $export['block-twitter_widget'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'twitter_widget',
    'module' => 'block',
    'node_types' => array(),
    'options' => 'a:1:{s:10:"attributes";a:1:{s:5:"class";a:1:{i:0;s:14:"twitter_widget";}}}',
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
        'weight' => -21,
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

  $export['views-mc_home_lede-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'mc_home_lede-block',
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
        'region' => 'homepage_top',
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
