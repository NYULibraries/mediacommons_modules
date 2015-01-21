<?php
/**
 * @file
 * mediacommons_user_setup.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mediacommons_user_setup_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|full';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_profile_page_pic',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_organization' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['user|user|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|user_teaser';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'user_teaser';
  $ds_fieldsetting->settings = array(
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_profile_page_pic',
    ),
  );
  $export['user|user|user_teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function mediacommons_user_setup_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'author_byline';
  $ds_field->label = 'Author Byline';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'spoke|*';
  $ds_field->properties = array(
    'block' => 'views|author_byline_for_spoke-block',
    'block_render' => '3',
  );
  $export['author_byline'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function mediacommons_user_setup_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'user_teaser';
  $ds_view_mode->label = 'User teaser';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['user_teaser'] = $ds_view_mode;

  return $export;
}
