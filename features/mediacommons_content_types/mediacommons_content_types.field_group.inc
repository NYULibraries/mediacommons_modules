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
        'classes' => 'group-flex2 homehub-spokes',
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
      5 => 'field_image_rights',
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
  $field_groups['group_hubhead|node|hub|hub_home_vertical'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|spoke|search_result';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'spoke';
  $field_group->mode = 'search_result';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'meta',
    'weight' => '1',
    'children' => array(
      0 => 'field_contributors',
      1 => 'comment_count_spokes',
      2 => 'title',
      3 => 'post_date',
      4 => 'search_snippet',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'meta',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'spoke-teaser-meta',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_meta|node|spoke|search_result'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spoke_teaser_meta|node|spoke|teaser';
  $field_group->group_name = 'group_spoke_teaser_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'spoke';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '3',
    'children' => array(
      0 => 'field_contributors',
      1 => 'comment_count_spokes',
      2 => 'reviewed_by',
      3 => 'title',
      4 => 'post_date',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Meta',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'spoke-teaser-meta',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'h3',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_spoke_teaser_meta|node|spoke|teaser'] = $field_group;

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
    'weight' => '5',
    'children' => array(
      0 => 'field_aim',
      1 => 'field_email',
      2 => 'field_phone',
      3 => 'field_skype',
      4 => 'field_twitter',
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
  $field_groups['group_contactinfo|user|user|full'] = $field_group;

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
      6 => 'field_image_rights',
      7 => 'title',
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
  t('Flex Group 1');
  t('Flex Group 2 ');
  t('Group Flex 2');
  t('Meta');
  t('headerInfo');
  t('meta');
  t('Address');  
  t('Contact');
  t('headerInfo');
  
  return $field_groups;
  
}
