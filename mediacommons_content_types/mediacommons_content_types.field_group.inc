<?php
/**
 * @file
 * mediacommons_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mediacommons_content_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'hubhead|node|hub|full';
  $field_group->group_name = 'hubhead';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hub';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'headerInfo',
    'weight' => '0',
    'children' => array(
      0 => 'field_body',
      1 => 'field_co_editor',
      2 => 'field_curators_editors',
      3 => 'field_period',
      4 => 'field_representative_image',
      5 => 'title',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'headerInfo',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'hubhead',
        'wrapper' => 'header',
      ),
    ),
  );
  $export['hubhead|node|hub|full'] = $field_group;

  return $export;
}
