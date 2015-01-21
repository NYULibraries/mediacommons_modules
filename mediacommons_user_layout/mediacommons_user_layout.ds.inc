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
        1 => 'field_email',
        2 => 'field_profile_name',
        3 => 'field_title',
        4 => 'field_skype',
        5 => 'field_organization',
        6 => 'field_twitter',
        7 => 'field_aim',
        8 => 'group_location',
        9 => 'field_url',
        10 => 'field_city',
        11 => 'field_state',
        12 => 'field_phone',
        13 => 'field_country',
        14 => 'group_contactinfo',
      ),
      'right' => array(
        15 => 'field_bio',
        16 => 'field_plan',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'header',
      'field_email' => 'header',
      'field_profile_name' => 'header',
      'field_title' => 'header',
      'field_skype' => 'header',
      'field_organization' => 'header',
      'field_twitter' => 'header',
      'field_aim' => 'header',
      'group_location' => 'header',
      'field_url' => 'header',
      'field_city' => 'header',
      'field_state' => 'header',
      'field_phone' => 'header',
      'field_country' => 'header',
      'group_contactinfo' => 'header',
      'field_bio' => 'right',
      'field_plan' => 'right',
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

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|user_teaser';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'user_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'ds_user_picture',
        1 => 'field_profile_name',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'ds_content',
      'field_profile_name' => 'ds_content',
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
  $export['user|user|user_teaser'] = $ds_layout;

  return $export;
}
