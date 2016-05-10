<?php
/**
 * @file
 * mediacommons_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mediacommons_content_types_field_group_info() {
  $field_groups = array();

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
    'label' => 'Meta',
    'weight' => '0',
    'children' => array(
      0 => 'field_body',
      1 => 'field_project',
      2 => 'field_rlink',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Meta',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-meta',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_meta|node|front_page_post|full'] = $field_group;

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
      1 => 'field_project',
      2 => 'field_rlink',
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
  $field_groups['group_meta|node|front_page_post|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Meta');

  return $field_groups;
}
