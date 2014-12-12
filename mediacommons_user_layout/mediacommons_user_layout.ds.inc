<?php
/**
 * @file
 * mediacommons_user_layout.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function mediacommons_user_layout_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|full';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'ds_user_picture',
        1 => 'field_skype',
        2 => 'name',
        3 => 'field_title',
        4 => 'field_organization',
        5 => 'field_location',
        6 => 'group_contactinfo',
        7 => 'field_email',
        9 => 'field_twitter',
        11 => 'field_aim',
      ),
      'right' => array(
        8 => 'field_bio',
        10 => 'field_plan',
        12 => 'summary',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'header',
      'field_skype' => 'header',
      'name' => 'header',
      'field_title' => 'header',
      'field_organization' => 'header',
      'field_location' => 'header',
      'group_contactinfo' => 'header',
      'field_email' => 'header',
      'field_bio' => 'right',
      'field_twitter' => 'header',
      'field_plan' => 'right',
      'field_aim' => 'header',
      'summary' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['user|user|full'] = $ds_layout;

  return $export;
}
