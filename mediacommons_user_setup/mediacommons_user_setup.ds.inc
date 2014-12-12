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
    'name' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_flexslider_full',
    ),
  );
  $export['user|user|full'] = $ds_fieldsetting;

  return $export;
}
