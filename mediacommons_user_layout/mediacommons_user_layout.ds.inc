<?php
/**
 * @file
 * mediacommons_user_layout.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mediacommons_user_layout_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|full';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments_from_this_user' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'posts_from_user' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'name' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => 'p-name fn',
        'ft' => array(),
      ),
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_profile_page_pic',
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
    'name' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => 'p-name name',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
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
        2 => 'name',
        3 => 'field_state',
        4 => 'field_title',
        5 => 'field_skype',
        6 => 'field_country',
        7 => 'field_city',
        8 => 'field_twitter',
        9 => 'field_organization',
        10 => 'field_aim',
        11 => 'group_location',
        12 => 'group_contactinfo',
        13 => 'field_url',
        14 => 'field_phone',
      ),
      'left' => array(
        15 => 'posts_from_user',
        16 => 'comments_from_this_user',
      ),
      'right' => array(
        17 => 'field_bio',
        18 => 'field_plan',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'header',
      'field_email' => 'header',
      'name' => 'header',
      'field_state' => 'header',
      'field_title' => 'header',
      'field_skype' => 'header',
      'field_country' => 'header',
      'field_city' => 'header',
      'field_twitter' => 'header',
      'field_organization' => 'header',
      'field_aim' => 'header',
      'group_location' => 'header',
      'group_contactinfo' => 'header',
      'field_url' => 'header',
      'field_phone' => 'header',
      'posts_from_user' => 'left',
      'comments_from_this_user' => 'left',
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
    'layout_disable_css' => 0,
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
        1 => 'name',
        2 => 'field_title',
        3 => 'field_organization',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'ds_content',
      'name' => 'ds_content',
      'field_title' => 'ds_content',
      'field_organization' => 'ds_content',
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
