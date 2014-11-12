<?php
/**
 * @file
 * mediacommons_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mediacommons_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mediacommons_content_types_node_info() {
  $items = array(
    'front_page_post' => array(
      'name' => t('Front Page Post'),
      'base' => 'node_content',
      'description' => t('Create a front page post. To add it to the front page carousel or in the list below.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hub' => array(
      'name' => t('Hub'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'spoke' => array(
      'name' => t('Spoke'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
