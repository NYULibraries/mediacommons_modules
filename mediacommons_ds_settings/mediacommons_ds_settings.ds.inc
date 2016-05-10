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
  $ds_fieldsetting->id = 'node|hub|third_mode';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'hub';
  $ds_fieldsetting->view_mode = 'third_mode';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h1',
        'class' => 'hub-title',
        'ft' => array(),
      ),
    ),
    'field_period' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'time',
          'fi-cl' => 'timerangeheader',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_representative_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|hub|third_mode'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function mediacommons_ds_settings_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'contributors_to_this_spoke';
  $ds_field->label = 'Contributors to this spoke';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|contributors_this_spoke-block',
    'block_render' => '3',
  );
  $export['contributors_to_this_spoke'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'hub_navigation';
  $ds_field->label = 'Hub Navigation';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'spoke|default
spoke|full';
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
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_curators_editors',
        1 => 'field_co_editor',
        2 => 'field_contributors',
        3 => 'field_spokes',
        4 => 'field_representative_image',
        5 => 'field_body',
        6 => 'field_period',
        7 => 'field_pubstat',
      ),
    ),
    'fields' => array(
      'field_curators_editors' => 'left',
      'field_co_editor' => 'left',
      'field_contributors' => 'left',
      'field_spokes' => 'left',
      'field_representative_image' => 'left',
      'field_body' => 'left',
      'field_period' => 'left',
      'field_pubstat' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|hub|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|hub|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'hub';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'hubhead',
        1 => 'field_representative_image',
        2 => 'title',
        3 => 'field_period',
        4 => 'field_curators_editors',
        5 => 'field_co_editor',
        6 => 'field_body',
        7 => 'field_spokes',
      ),
    ),
    'fields' => array(
      'hubhead' => 'ds_content',
      'field_representative_image' => 'ds_content',
      'title' => 'ds_content',
      'field_period' => 'ds_content',
      'field_curators_editors' => 'ds_content',
      'field_co_editor' => 'ds_content',
      'field_body' => 'ds_content',
      'field_spokes' => 'ds_content',
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
    'layout_disable_css' => FALSE,
  );
  $export['node|hub|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|hub|hub_teaser_for_archive_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'hub';
  $ds_layout->view_mode = 'hub_teaser_for_archive_page';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_representative_image',
        1 => 'title',
        2 => 'field_period',
        3 => 'field_curators_editors',
        4 => 'field_co_editor',
        5 => 'field_spokes',
        6 => 'group_rightside',
      ),
    ),
    'fields' => array(
      'field_representative_image' => 'ds_content',
      'title' => 'ds_content',
      'field_period' => 'ds_content',
      'field_curators_editors' => 'ds_content',
      'field_co_editor' => 'ds_content',
      'field_spokes' => 'ds_content',
      'group_rightside' => 'ds_content',
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
    'layout_disable_css' => FALSE,
  );
  $export['node|hub|hub_teaser_for_archive_page'] = $ds_layout;

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
        0 => 'field_representative_image',
        1 => 'field_period',
        2 => 'title',
        3 => 'field_curators_editors',
        4 => 'field_contributors',
      ),
    ),
    'fields' => array(
      'field_representative_image' => 'ds_content',
      'field_period' => 'ds_content',
      'title' => 'ds_content',
      'field_curators_editors' => 'ds_content',
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
    'layout_disable_css' => FALSE,
  );
  $export['node|hub|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|hub|third_mode';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'hub';
  $ds_layout->view_mode = 'third_mode';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_period',
        1 => 'group_headerinfo',
        2 => 'field_spokes',
        3 => 'field_representative_image',
        4 => 'title',
        5 => 'field_curators_editors',
        6 => 'field_co_editor',
        7 => 'field_body',
      ),
    ),
    'fields' => array(
      'field_period' => 'ds_content',
      'group_headerinfo' => 'ds_content',
      'field_spokes' => 'ds_content',
      'field_representative_image' => 'ds_content',
      'title' => 'ds_content',
      'field_curators_editors' => 'ds_content',
      'field_co_editor' => 'ds_content',
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
  $export['node|hub|third_mode'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|spoke|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'spoke';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|spoke|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|spoke|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'spoke';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'post_date',
        1 => 'title',
        2 => 'contributors_to_this_spoke',
      ),
      'left' => array(
        3 => 'field_embed',
        4 => 'field_body',
        5 => 'field_taxonomy',
        6 => 'comments',
      ),
      'right' => array(
        7 => 'hub_navigation',
      ),
    ),
    'fields' => array(
      'post_date' => 'header',
      'title' => 'header',
      'contributors_to_this_spoke' => 'header',
      'field_embed' => 'left',
      'field_body' => 'left',
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
    'layout_disable_css' => 0,
  );
  $export['node|spoke|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|spoke|spoke_teaser_simplest';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'spoke';
  $ds_layout->view_mode = 'spoke_teaser_simplest';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_contributors',
        2 => 'comment_count_spokes',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_contributors' => 'ds_content',
      'comment_count_spokes' => 'ds_content',
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
    'layout_disable_css' => FALSE,
  );
  $export['node|spoke|spoke_teaser_simplest'] = $ds_layout;

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
        0 => 'field_attached_images',
        1 => 'title',
        2 => 'post_date',
        3 => 'field_contributors',
        4 => 'comment_count_spokes',
      ),
    ),
    'fields' => array(
      'field_attached_images' => 'ds_content',
      'title' => 'ds_content',
      'post_date' => 'ds_content',
      'field_contributors' => 'ds_content',
      'comment_count_spokes' => 'ds_content',
    ),
    'limit' => array(
      'field_attached_images' => '1',
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
    'layout_disable_css' => FALSE,
  );
  $export['node|spoke|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function mediacommons_ds_settings_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'hub_teaser_for_archive_page';
  $ds_view_mode->label = 'Hub teaser for archive page';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['hub_teaser_for_archive_page'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'spoke_teaser_simplest';
  $ds_view_mode->label = 'Spoke teaser simplest';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['spoke_teaser_simplest'] = $ds_view_mode;

  return $export;
}
