<?php
/**
 * @file
 * mediacommons_carousel.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mediacommons_carousel_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|front_page_post|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'front_page_post';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|front_page_post|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mediacommons_carousel_ds_layout_settings_info() {
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
        0 => 'title',
        1 => 'field_body',
        2 => 'field_carousel_image',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_body' => 'ds_content',
      'field_carousel_image' => 'ds_content',
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

  return $export;
}