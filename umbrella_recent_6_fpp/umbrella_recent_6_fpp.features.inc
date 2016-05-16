<?php
/**
 * @file
 * umbrella_recent_6_fpp.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function umbrella_recent_6_fpp_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function umbrella_recent_6_fpp_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function umbrella_recent_6_fpp_node_info() {
  $items = array(
    'front_page_post' => array(
      'name' => t('Front Page Post'),
      'base' => 'node_content',
      'description' => t('Create a front page post. To add it to the front page carousel or in the list below.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
