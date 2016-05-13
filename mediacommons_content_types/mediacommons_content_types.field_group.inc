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
  $field_group->identifier = 'group_rightside|node|hub|hub_teaser_for_archive_page';
  $field_group->group_name = 'group_rightside';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hub';
  $field_group->mode = 'hub_teaser_for_archive_page';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'rightside',
    'weight' => '1',
    'children' => array(
      0 => 'field_co_editor',
      1 => 'field_curators_editors',
      2 => 'field_period',
      3 => 'field_spokes',
      4 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'rightside',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-rightside',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_rightside|node|hub|hub_teaser_for_archive_page'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('rightside');

  return $field_groups;
}
