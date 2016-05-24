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
  $field_group->identifier = 'group_flex1|node|hub|teaser';
  $field_group->group_name = 'group_flex1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hub';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Flex Group 1',
    'weight' => '0',
    'children' => array(
      0 => 'field_representative_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Flex Group 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-flex1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_flex1|node|hub|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_flex2|node|hub|full';
  $field_group->group_name = 'group_flex2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hub';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group Flex 2',
    'weight' => '1',
    'children' => array(
      0 => 'field_spokes',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Group Flex 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-flex2',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_flex2|node|hub|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_flex2|node|hub|hub_home_vertical';
  $field_group->group_name = 'group_flex2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hub';
  $field_group->mode = 'hub_home_vertical';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group Flex 2',
    'weight' => '1',
    'children' => array(
      0 => 'field_spokes',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Group Flex 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-flex2',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_flex2|node|hub|hub_home_vertical'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_flex2|node|hub|teaser';
  $field_group->group_name = 'group_flex2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hub';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Flex Group 2 ',
    'weight' => '1',
    'children' => array(
      0 => 'field_curators_editors',
      1 => 'field_period',
      2 => 'field_spokes',
      3 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Flex Group 2 ',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-flex2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_flex2|node|hub|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hubhead|node|hub|hub_home_vertical';
  $field_group->group_name = 'group_hubhead';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hub';
  $field_group->mode = 'hub_home_vertical';
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
        'classes' => 'hubhead group-flex1',
        'wrapper' => 'header',
      ),
    ),
  );
  $field_groups['group_hubhead|node|hub|hub_home_vertical'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Flex Group 1');
  t('Flex Group 2 ');
  t('Group Flex 2');
  t('headerInfo');

  return $field_groups;
}
