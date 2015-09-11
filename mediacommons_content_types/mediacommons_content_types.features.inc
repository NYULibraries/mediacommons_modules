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
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function mediacommons_content_types_image_default_styles() {
  $styles = array();

  // Exported image style: 450_by_175.
  $styles['450_by_175'] = array(
    'label' => '450 by 175',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 450,
          'height' => 175,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
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
/**
* Implements hook_entity_info_alter().
*/
function mediacommons_content_types_entity_info_alter(&$entity_info) {
  $entity_info['node']['view modes']['hub_for_home'] = array(
    'label' => t('Hub for Home'),
    'custom settings' => TRUE,
  );
}

