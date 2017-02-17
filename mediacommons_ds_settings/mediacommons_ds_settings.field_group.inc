<?php
/**
 * @file
 * mediacommons_ds_settings.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mediacommons_ds_settings_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_headerinfo|node|hub|third_mode';
  $field_group->group_name = 'group_headerinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hub';
  $field_group->mode = 'third_mode';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'headerInfo',
    'weight' => '1',
    'children' => array(
      0 => 'field_body',
      1 => 'field_co_editor',
      2 => 'field_curators_editors',
      3 => 'field_representative_image',
      4 => 'title',
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
  $field_groups['group_headerinfo|node|hub|third_mode'] = $field_group;

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
      5 => 'field_taxonomy',
      6 => 'title',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'headerInfo',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'hubhead group-flex1',
        'wrapper' => 'header',
      ),
    ),
  );
  $field_groups['hubhead|node|hub|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('headerInfo');

  return $field_groups;
}
