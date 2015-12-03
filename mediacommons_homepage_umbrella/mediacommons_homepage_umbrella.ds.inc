<?php
/**
 * @file
 * mediacommons_homepage_umbrella.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function mediacommons_homepage_umbrella_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|front_page_post|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'front_page_post';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_meta',
        1 => 'field_large_image',
        2 => 'field_project',
        3 => 'field_rlink',
        4 => 'field_body',
      ),
    ),
    'fields' => array(
      'group_meta' => 'ds_content',
      'field_large_image' => 'ds_content',
      'field_project' => 'ds_content',
      'field_rlink' => 'ds_content',
      'field_body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|front_page_post|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|front_page_post|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'front_page_post';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_meta',
        1 => 'field_featured_image_thumb',
        2 => 'field_project',
        3 => 'field_rlink',
        4 => 'field_body',
      ),
    ),
    'fields' => array(
      'group_meta' => 'ds_content',
      'field_featured_image_thumb' => 'ds_content',
      'field_project' => 'ds_content',
      'field_rlink' => 'ds_content',
      'field_body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|front_page_post|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function mediacommons_homepage_umbrella_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'front_page_post_super_featured';
  $ds_view_mode->label = 'Front page post super featured';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['front_page_post_super_featured'] = $ds_view_mode;

  return $export;
}
