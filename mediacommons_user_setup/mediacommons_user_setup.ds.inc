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

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'comments_from_this_user';
  $ds_field->label = 'Comments from this user';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|comments_from_user-block',
    'block_render' => '2',
  );
  $export['comments_from_this_user'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'posts_from_user';
  $ds_field->label = 'Posts from user';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|posts_from_user-block',
    'block_render' => '2',
  );
  $export['posts_from_user'] = $ds_field;

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
