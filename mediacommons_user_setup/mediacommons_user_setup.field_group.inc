<?php
/**
 * @file
 * mediacommons_user_setup.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mediacommons_user_setup_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|user|user|full';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Address',
    'weight' => '4',
    'children' => array(
      0 => 'field_city',
      1 => 'field_country',
      2 => 'field_state',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Address',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'h-adr',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_location|user|user|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');

  return $field_groups;
}
