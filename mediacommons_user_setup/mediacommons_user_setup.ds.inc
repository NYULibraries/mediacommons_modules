<?php
/**
 * @file
 * mediacommons_user_setup.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function mediacommons_user_setup_ds_custom_fields_info() {
  $export = array();

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
  $ds_field->field = 'posts_contributed';
  $ds_field->label = 'Posts Contributed';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|posts_contributed-block',
    'block_render' => '2',
  );
  $export['posts_contributed'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function mediacommons_user_setup_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'user_byline';
  $ds_view_mode->label = 'User byline';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['user_byline'] = $ds_view_mode;

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
