<?php
/**
 * @file
 * mediacommons_ds_settings.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mediacommons_ds_settings_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|default';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'default';
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
  $export['user|user|default'] = $ds_fieldsetting;

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
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_thumbnail',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['user|user|user_teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function mediacommons_ds_settings_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'author_metadata_for_spoke';
  $ds_field->label = 'Author Metadata For Spoke';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'user' => 'user',
  );
  $ds_field->ui_limit = 'spoke|default';
  $ds_field->properties = array(
    'block' => 'views|author_metadata_for_spoke-block',
    'block_render' => '3',
  );
  $export['author_metadata_for_spoke'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'hub_navigation';
  $ds_field->label = 'Hub Navigation';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'spoke|default';
  $ds_field->properties = array(
    'block' => 'views|82d8a75bde4ff36a1c89b3fb77664e68',
    'block_render' => '3',
  );
  $export['hub_navigation'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mediacommons_ds_settings_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|hub|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'hub';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_period',
        1 => 'title',
        2 => 'field_curators_editors',
        3 => 'field_co_editor',
        4 => 'field_body',
        5 => 'field_spokes',
        6 => 'field_contributors',
      ),
    ),
    'fields' => array(
      'field_period' => 'ds_content',
      'title' => 'ds_content',
      'field_curators_editors' => 'ds_content',
      'field_co_editor' => 'ds_content',
      'field_body' => 'ds_content',
      'field_spokes' => 'ds_content',
      'field_contributors' => 'ds_content',
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
  $export['node|hub|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|hub|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'hub';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_period',
        1 => 'title',
        2 => 'field_curators_editors',
        3 => 'field_representative_image',
        4 => 'field_body',
        5 => 'field_contributors',
      ),
    ),
    'fields' => array(
      'field_period' => 'ds_content',
      'title' => 'ds_content',
      'field_curators_editors' => 'ds_content',
      'field_representative_image' => 'ds_content',
      'field_body' => 'ds_content',
      'field_contributors' => 'ds_content',
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
  $export['node|hub|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|spoke|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'spoke';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
        1 => 'post_date',
        2 => 'author_metadata_for_spoke',
      ),
      'left' => array(
        3 => 'field_embed',
        4 => 'field_attached_images',
        5 => 'field_body',
        6 => 'field_contributors',
        7 => 'field_taxonomy',
        8 => 'comments',
      ),
      'right' => array(
        9 => 'hub_navigation',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'post_date' => 'header',
      'author_metadata_for_spoke' => 'header',
      'field_embed' => 'left',
      'field_attached_images' => 'left',
      'field_body' => 'left',
      'field_contributors' => 'left',
      'field_taxonomy' => 'left',
      'comments' => 'left',
      'hub_navigation' => 'right',
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
  $export['node|spoke|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|spoke|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'spoke';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'post_date',
        2 => 'author',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'post_date' => 'ds_content',
      'author' => 'ds_content',
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
  $export['node|spoke|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'ds_user_picture',
        1 => 'name',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'ds_content',
      'name' => 'ds_content',
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
  $export['user|user|default'] = $ds_layout;

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
        2 => 'field_organization',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'ds_content',
      'name' => 'ds_content',
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

/**
 * Implements hook_ds_view_modes_info().
 */
function mediacommons_ds_settings_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'user_teaser';
  $ds_view_mode->label = 'user teaser';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['user_teaser'] = $ds_view_mode;

  return $export;
}
