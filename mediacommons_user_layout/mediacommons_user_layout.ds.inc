<?php
/**
 * @file
 * mediacommons_user_layout.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mediacommons_user_layout_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|organizations|default';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'organizations';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|organizations|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|organizations|full';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'organizations';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'users_in_this_org' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|organizations|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|full';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'reviews_from' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments_from_this_user' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'curated_hubs' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'posts_contributed' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'name' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => 'p-name fn',
        'ft' => array(),
      ),
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_profile_page_pic',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_city' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'p-locality',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_country' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'p-country-name',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_state' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'p-region',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['user|user|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|user_byline';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'user_byline';
  $ds_fieldsetting->settings = array(
    'name' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => '',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['user|user|user_byline'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|user_teaser';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'user_teaser';
  $ds_fieldsetting->settings = array(
    'name' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => 'p-name name fn',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_profile_page_pic',
    ),
  );
  $export['user|user|user_teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function mediacommons_user_layout_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'reviews_from';
  $ds_field->label = 'Reviews from this user';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|reviews_by-block',
    'block_render' => '2',
  );
  $export['reviews_from'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'users_in_this_org';
  $ds_field->label = 'Users in this org';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|users_in_an_org-block',
    'block_render' => '2',
  );
  $export['users_in_this_org'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mediacommons_user_layout_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|review|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'review';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_isreviewof',
        1 => 'title',
        2 => 'field_reviewer',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'field_isreviewof' => 'ds_content',
      'title' => 'ds_content',
      'field_reviewer' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|review|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|organizations|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'organizations';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'description',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'description' => 'ds_content',
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
  $export['taxonomy_term|organizations|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|organizations|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'organizations';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'users_in_this_org',
      ),
    ),
    'fields' => array(
      'users_in_this_org' => 'ds_content',
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
  $export['taxonomy_term|organizations|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|full';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'ds_user_picture',
        1 => 'field_email',
        2 => 'name',
        3 => 'field_title',
        4 => 'field_skype',
        5 => 'field_organization',
        6 => 'field_twitter',
        7 => 'field_city',
        8 => 'group_location',
        9 => 'field_aim',
        10 => 'field_state',
        11 => 'field_country',
        12 => 'group_contactinfo',
        13 => 'field_url',
        15 => 'field_phone',
      ),
      'left' => array(
        14 => 'curated_hubs',
        16 => 'posts_contributed',
        17 => 'comments_from_this_user',
        18 => 'reviews_from',
      ),
      'right' => array(
        19 => 'field_taxonomy',
        20 => 'field_bio',
        21 => 'field_plan',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'header',
      'field_email' => 'header',
      'name' => 'header',
      'field_title' => 'header',
      'field_skype' => 'header',
      'field_organization' => 'header',
      'field_twitter' => 'header',
      'field_city' => 'header',
      'group_location' => 'header',
      'field_aim' => 'header',
      'field_state' => 'header',
      'field_country' => 'header',
      'group_contactinfo' => 'header',
      'field_url' => 'header',
      'curated_hubs' => 'left',
      'field_phone' => 'header',
      'posts_contributed' => 'left',
      'comments_from_this_user' => 'left',
      'reviews_from' => 'left',
      'field_taxonomy' => 'right',
      'field_bio' => 'right',
      'field_plan' => 'right',
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
  $export['user|user|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|user_byline';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'user_byline';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'name',
        1 => 'field_organization',
      ),
    ),
    'fields' => array(
      'name' => 'ds_content',
      'field_organization' => 'ds_content',
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
  $export['user|user|user_byline'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|user_teaser';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'user_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'ds_user_picture',
        1 => 'name',
        2 => 'field_title',
        3 => 'field_organization',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'ds_content',
      'name' => 'ds_content',
      'field_title' => 'ds_content',
      'field_organization' => 'ds_content',
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
  $export['user|user|user_teaser'] = $ds_layout;

  return $export;
}
