<?php
/**
 * @file
 * mc_front_page_post_setup.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mc_front_page_post_setup_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|front_page_post|default';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'front_page_post';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '5',
    'children' => array(
      0 => 'body',
      1 => 'field_body',
      2 => 'field_link',
      3 => 'field_project',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-meta field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_meta|node|front_page_post|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|front_page_post|full';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'front_page_post';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '1',
    'children' => array(
      0 => 'field_body',
      1 => 'field_link',
      2 => 'field_project',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Metadata',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-meta field-group-fieldset',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_meta|node|front_page_post|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|front_page_post|teaser';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'front_page_post';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '0',
    'children' => array(
      0 => 'field_body',
      1 => 'field_link',
      2 => 'field_project',
      3 => 'field_subtitle',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Meta',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-meta field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_meta|node|front_page_post|teaser'] = $field_group;

  return $export;
}
