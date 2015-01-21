<?php
/**
 * @file
 * mediacommons_user_layout.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mediacommons_user_layout_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contactinfo|user|user|full';
  $field_group->group_name = 'group_contactinfo';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '8',
    'children' => array(
      0 => 'field_aim',
      1 => 'field_email',
      2 => 'field_skype',
      3 => 'field_twitter',
      4 => 'field_phone',
      5 => 'field_url',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'classes' => 'contact-info',
        'element' => 'ul',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_contactinfo|user|user|full'] = $field_group;

  return $export;
}
