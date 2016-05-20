<?php
/**
 * @file
 * mediacommons_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mediacommons_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "corresponding_node_references" && $api == "default_corresponding_node_references_presets") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mediacommons_content_types_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function mediacommons_content_types_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['F j, Y'] = 'F j, Y';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function mediacommons_content_types_date_format_types() {
  $format_types = array();
  // Exported date format type: medium_mc
  $format_types['medium_mc'] = 'Medium MC';
  return $format_types;
}

/**
 * Implements hook_node_info().
 */
function mediacommons_content_types_node_info() {
  $items = array(
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
