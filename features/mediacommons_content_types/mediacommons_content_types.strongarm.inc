<?php
/**
 * @file
 * mediacommons_content_types.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mediacommons_content_types_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_front_page_post';
  $strongarm->value = 'edit-auto-nodetitle';
  $export['additional_settings__active_tab_front_page_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_cache_client';
  $strongarm->value = 1;
  $export['admin_menu_cache_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_components';
  $strongarm->value = array(
    'admin_menu.menu' => TRUE,
    'admin_menu.account' => TRUE,
    'shortcut.links' => FALSE,
    'admin_menu.icon' => FALSE,
    'admin_menu.search' => FALSE,
    'admin_menu.users' => FALSE,
  );
  $export['admin_menu_components'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_margin_top';
  $strongarm->value = 1;
  $export['admin_menu_margin_top'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_position_fixed';
  $strongarm->value = 1;
  $export['admin_menu_position_fixed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_modules';
  $strongarm->value = 0;
  $export['admin_menu_tweak_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_permissions';
  $strongarm->value = 0;
  $export['admin_menu_tweak_permissions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_tabs';
  $strongarm->value = 0;
  $export['admin_menu_tweak_tabs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced__active_tab';
  $strongarm->value = 'edit-plugins';
  $export['advanced__active_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_front_page_post';
  $strongarm->value = '1';
  $export['ant_front_page_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_front_page_post';
  $strongarm->value = '';
  $export['ant_pattern_front_page_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_front_page_post';
  $strongarm->value = 0;
  $export['ant_php_front_page_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_front_page_post';
  $strongarm->value = 0;
  $export['comment_anonymous_front_page_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_hub';
  $strongarm->value = 0;
  $export['comment_anonymous_hub'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_review';
  $strongarm->value = 0;
  $export['comment_anonymous_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_spoke';
  $strongarm->value = 0;
  $export['comment_anonymous_spoke'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_front_page_post';
  $strongarm->value = 1;
  $export['comment_default_mode_front_page_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_hub';
  $strongarm->value = 1;
  $export['comment_default_mode_hub'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_review';
  $strongarm->value = 0;
  $export['comment_default_mode_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_spoke';
  $strongarm->value = 1;
  $export['comment_default_mode_spoke'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_front_page_post';
  $strongarm->value = '50';
  $export['comment_default_per_page_front_page_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_hub';
  $strongarm->value = '50';
  $export['comment_default_per_page_hub'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_review';
  $strongarm->value = '50';
  $export['comment_default_per_page_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_spoke';
  $strongarm->value = '50';
  $export['comment_default_per_page_spoke'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_front_page_post';
  $strongarm->value = 1;
  $export['comment_form_location_front_page_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_hub';
  $strongarm->value = 1;
  $export['comment_form_location_hub'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_review';
  $strongarm->value = 0;
  $export['comment_form_location_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_spoke';
  $strongarm->value = 1;
  $export['comment_form_location_spoke'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_front_page_post';
  $strongarm->value = '2';
  $export['comment_front_page_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_hub';
  $strongarm->value = '2';
  $export['comment_hub'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = 0;
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_front_page_post';
  $strongarm->value = '1';
  $export['comment_preview_front_page_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_hub';
  $strongarm->value = '1';
  $export['comment_preview_hub'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_review';
  $strongarm->value = '0';
  $export['comment_preview_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_spoke';
  $strongarm->value = '1';
  $export['comment_preview_spoke'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_review';
  $strongarm->value = '0';
  $export['comment_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_spoke';
  $strongarm->value = '2';
  $export['comment_spoke'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_front_page_post';
  $strongarm->value = 1;
  $export['comment_subject_field_front_page_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_hub';
  $strongarm->value = 1;
  $export['comment_subject_field_hub'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_review';
  $strongarm->value = 0;
  $export['comment_subject_field_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_spoke';
  $strongarm->value = 1;
  $export['comment_subject_field_spoke'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_long_no_time';
  $strongarm->value = 'l, F j, Y';
  $export['date_format_long_no_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_medium_mc';
  $strongarm->value = 'F j, Y';
  $export['date_format_medium_mc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short_no_time';
  $strongarm->value = 'n/j/Y';
  $export['date_format_short_no_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_front_page_post';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_front_page_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_hub';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_hub'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_review';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_spoke';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_spoke'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_front_page_post';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_front_page_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_hub';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_hub'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_review';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_spoke';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_spoke'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_front_page_post';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_front_page_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_hub';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_hub'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_review';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_spoke';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_spoke'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_front_page_post';
  $strongarm->value = array(
    0 => 'default',
    1 => 'full',
    2 => 'teaser',
  );
  $export['ds_extras_view_modes_front_page_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__page';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__review';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'hub_home_vertical' => array(
        'custom_settings' => FALSE,
      ),
      'hub_teaser_for_archive_page' => array(
        'custom_settings' => FALSE,
      ),
      'hub_teaser_compact' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gravatar_default';
  $strongarm->value = '3';
  $export['gravatar_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gravatar_rating';
  $strongarm->value = 'G';
  $export['gravatar_rating'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gravatar_size';
  $strongarm->value = '150';
  $export['gravatar_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gravatar_url';
  $strongarm->value = 'http://www.gravatar.com/avatar/';
  $export['gravatar_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gravatar_url_ssl';
  $strongarm->value = 'https://secure.gravatar.com/avatar/';
  $export['gravatar_url_ssl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_front_page_post_author';
  $strongarm->value = 1;
  $export['hide_front_page_post_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_front_page_post_book';
  $strongarm->value = 1;
  $export['hide_front_page_post_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_front_page_post_comment_settings';
  $strongarm->value = 1;
  $export['hide_front_page_post_comment_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_front_page_post_custom_breadcrumbs';
  $strongarm->value = 1;
  $export['hide_front_page_post_custom_breadcrumbs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_front_page_post_menu';
  $strongarm->value = 1;
  $export['hide_front_page_post_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_front_page_post_metatags';
  $strongarm->value = 1;
  $export['hide_front_page_post_metatags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_front_page_post_options';
  $strongarm->value = 1;
  $export['hide_front_page_post_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_front_page_post_panelizer';
  $strongarm->value = 1;
  $export['hide_front_page_post_panelizer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_front_page_post_path';
  $strongarm->value = 1;
  $export['hide_front_page_post_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_front_page_post_redirect';
  $strongarm->value = 1;
  $export['hide_front_page_post_redirect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_front_page_post_revision_information';
  $strongarm->value = 1;
  $export['hide_front_page_post_revision_information'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_front_page_post_xmlsitemap';
  $strongarm->value = 1;
  $export['hide_front_page_post_xmlsitemap'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_hub_author';
  $strongarm->value = 1;
  $export['hide_hub_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_hub_book';
  $strongarm->value = 1;
  $export['hide_hub_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_hub_comment_settings';
  $strongarm->value = 1;
  $export['hide_hub_comment_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_hub_custom_breadcrumbs';
  $strongarm->value = 1;
  $export['hide_hub_custom_breadcrumbs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_hub_menu';
  $strongarm->value = 1;
  $export['hide_hub_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_hub_metatags';
  $strongarm->value = 1;
  $export['hide_hub_metatags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_hub_options';
  $strongarm->value = 1;
  $export['hide_hub_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_hub_panelizer';
  $strongarm->value = 1;
  $export['hide_hub_panelizer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_hub_path';
  $strongarm->value = 1;
  $export['hide_hub_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_hub_redirect';
  $strongarm->value = 1;
  $export['hide_hub_redirect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_hub_revision_information';
  $strongarm->value = 1;
  $export['hide_hub_revision_information'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_hub_xmlsitemap';
  $strongarm->value = 1;
  $export['hide_hub_xmlsitemap'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_page_author';
  $strongarm->value = 1;
  $export['hide_page_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_page_book';
  $strongarm->value = 1;
  $export['hide_page_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_page_comment_settings';
  $strongarm->value = 1;
  $export['hide_page_comment_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_page_custom_breadcrumbs';
  $strongarm->value = 1;
  $export['hide_page_custom_breadcrumbs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_page_menu';
  $strongarm->value = 1;
  $export['hide_page_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_page_metatags';
  $strongarm->value = 1;
  $export['hide_page_metatags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_page_options';
  $strongarm->value = 1;
  $export['hide_page_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_page_panelizer';
  $strongarm->value = 1;
  $export['hide_page_panelizer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_page_path';
  $strongarm->value = 1;
  $export['hide_page_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_page_redirect';
  $strongarm->value = 1;
  $export['hide_page_redirect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_page_revision_information';
  $strongarm->value = 1;
  $export['hide_page_revision_information'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_page_xmlsitemap';
  $strongarm->value = 1;
  $export['hide_page_xmlsitemap'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_review_author';
  $strongarm->value = 1;
  $export['hide_review_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_review_book';
  $strongarm->value = 1;
  $export['hide_review_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_review_comment_settings';
  $strongarm->value = 1;
  $export['hide_review_comment_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_review_custom_breadcrumbs';
  $strongarm->value = 1;
  $export['hide_review_custom_breadcrumbs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_review_menu';
  $strongarm->value = 1;
  $export['hide_review_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_review_metatags';
  $strongarm->value = 1;
  $export['hide_review_metatags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_review_options';
  $strongarm->value = 1;
  $export['hide_review_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_review_panelizer';
  $strongarm->value = 1;
  $export['hide_review_panelizer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_review_path';
  $strongarm->value = 1;
  $export['hide_review_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_review_redirect';
  $strongarm->value = 1;
  $export['hide_review_redirect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_review_revision_information';
  $strongarm->value = 1;
  $export['hide_review_revision_information'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_review_xmlsitemap';
  $strongarm->value = 1;
  $export['hide_review_xmlsitemap'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_spoke_author';
  $strongarm->value = 1;
  $export['hide_spoke_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_spoke_book';
  $strongarm->value = 1;
  $export['hide_spoke_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_spoke_comment_settings';
  $strongarm->value = 1;
  $export['hide_spoke_comment_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_spoke_custom_breadcrumbs';
  $strongarm->value = 1;
  $export['hide_spoke_custom_breadcrumbs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_spoke_menu';
  $strongarm->value = 1;
  $export['hide_spoke_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_spoke_metatags';
  $strongarm->value = 1;
  $export['hide_spoke_metatags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_spoke_options';
  $strongarm->value = 1;
  $export['hide_spoke_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_spoke_panelizer';
  $strongarm->value = 1;
  $export['hide_spoke_panelizer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_spoke_path';
  $strongarm->value = 1;
  $export['hide_spoke_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_spoke_redirect';
  $strongarm->value = 1;
  $export['hide_spoke_redirect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_spoke_revision_information';
  $strongarm->value = 1;
  $export['hide_spoke_revision_information'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_spoke_xmlsitemap';
  $strongarm->value = 1;
  $export['hide_spoke_xmlsitemap'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_profiles';
  $strongarm->value = array(
    1 => array(
      'name' => 'User-1',
      'usertab' => 1,
      'filesize' => 0,
      'quota' => 0,
      'tuquota' => 0,
      'extensions' => '*',
      'dimensions' => '1200x1200',
      'filenum' => 0,
      'directories' => array(
        0 => array(
          'name' => '.',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 1,
          'resize' => 1,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Small',
          'dimensions' => '90x90',
          'prefix' => 'small_',
          'suffix' => '',
        ),
        1 => array(
          'name' => 'Medium',
          'dimensions' => '120x120',
          'prefix' => 'medium_',
          'suffix' => '',
        ),
        2 => array(
          'name' => 'Large',
          'dimensions' => '180x180',
          'prefix' => 'large_',
          'suffix' => '',
        ),
      ),
    ),
    2 => array(
      'name' => 'Sample profile',
      'usertab' => 1,
      'filesize' => 1,
      'quota' => 2,
      'tuquota' => 0,
      'extensions' => 'gif png jpg jpeg',
      'dimensions' => '800x600',
      'filenum' => 1,
      'directories' => array(
        0 => array(
          'name' => 'u%uid',
          'subnav' => 0,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 0,
          'resize' => 0,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Thumb',
          'dimensions' => '90x90',
          'prefix' => 'thumb_',
          'suffix' => '',
        ),
      ),
    ),
  );
  $export['imce_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_hub';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_hub'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_review';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_spoke';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_spoke'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_hub';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_hub'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_review';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_spoke';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_spoke'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_front_page_post_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Title',
    ),
    'additional_settings' => array(
      'region' => 'main',
      'weight' => '12',
      'has_required' => FALSE,
      'title' => 'Vertical tabs',
      'hidden' => 0,
    ),
    'actions' => array(
      'region' => 'footer',
      'weight' => '13',
      'has_required' => FALSE,
      'title' => 'Save',
      'hidden' => 0,
    ),
    'field_pubstat' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Publication Status',
      'hidden' => 0,
    ),
    'field_body' => array(
      'region' => 'main',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Description',
      'hidden' => 0,
    ),
    'field_featured_image_thumb' => array(
      'region' => 'main',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Featured Image Thumb',
      'hidden' => 0,
    ),
    'field_large_image' => array(
      'region' => 'main',
      'weight' => '11',
      'has_required' => FALSE,
      'title' => 'Large image',
      'hidden' => 0,
    ),
    'field_project' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Project',
      'hidden' => 0,
    ),
    'field_rlink' => array(
      'region' => 'main',
      'weight' => '7',
      'has_required' => TRUE,
      'title' => 'Link to Resource',
    ),
    'xmlsitemap' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'metatags' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'custom_breadcrumbs' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'redirect' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'panelizer' => array(
      'region' => 'main',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'book' => array(
      'region' => 'main',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_front_page_post_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_hub_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Title',
    ),
    'additional_settings' => array(
      'region' => 'main',
      'weight' => '13',
      'has_required' => FALSE,
      'title' => 'Vertical tabs',
      'hidden' => 0,
    ),
    'actions' => array(
      'region' => 'footer',
      'weight' => '12',
      'has_required' => FALSE,
      'title' => 'Save',
      'hidden' => 0,
    ),
    'field_body' => array(
      'region' => 'main',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Body',
      'hidden' => 0,
    ),
    'field_co_editor' => array(
      'region' => 'main',
      'weight' => '10',
      'has_required' => FALSE,
      'title' => 'Co-editor',
      'hidden' => 0,
    ),
    'field_contributors' => array(
      'region' => 'main',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Contributors',
      'hidden' => 0,
    ),
    'field_curators_editors' => array(
      'region' => 'main',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Curated by',
      'hidden' => 0,
    ),
    'field_image_rights' => array(
      'region' => 'main',
      'weight' => '12',
      'has_required' => FALSE,
      'title' => 'Representative image: Rights and Attribution',
      'hidden' => 0,
    ),
    'field_period' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Start and end dates',
      'hidden' => 0,
    ),
    'field_pubstat' => array(
      'region' => 'right',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Publication Status',
      'hidden' => 0,
    ),
    'field_representative_image' => array(
      'region' => 'main',
      'weight' => '11',
      'has_required' => FALSE,
      'title' => 'Representative Image',
      'hidden' => 0,
    ),
    'field_spokes' => array(
      'region' => 'main',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Spokes',
      'hidden' => 0,
    ),
    'field_taxonomy' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Tags',
      'hidden' => 0,
    ),
    'xmlsitemap' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'metatags' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'custom_breadcrumbs' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'redirect' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'panelizer' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'book' => array(
      'region' => 'main',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_hub_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_page_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Title',
    ),
    'additional_settings' => array(
      'region' => 'main',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Vertical tabs',
      'hidden' => 0,
    ),
    'actions' => array(
      'region' => 'footer',
      'weight' => '10',
      'has_required' => FALSE,
      'title' => 'Save',
      'hidden' => 0,
    ),
    'body' => array(
      'region' => 'main',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Body',
      'hidden' => 0,
    ),
    'field_pubstat' => array(
      'region' => 'right',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Publication Status',
      'hidden' => 0,
    ),
    'field_body' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'xmlsitemap' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'metatags' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'custom_breadcrumbs' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'redirect' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'panelizer' => array(
      'region' => 'main',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'book' => array(
      'region' => 'main',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_page_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_review_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Title',
    ),
    'additional_settings' => array(
      'region' => 'main',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Vertical tabs',
      'hidden' => 0,
    ),
    'actions' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Save',
      'hidden' => 0,
    ),
    'body' => array(
      'region' => 'main',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Review',
      'hidden' => 0,
    ),
    'field_isreviewof' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Review of',
      'hidden' => 0,
    ),
    'field_pubstat' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Publication Status',
      'hidden' => 0,
    ),
    'field_reviewer' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Reviewer',
      'hidden' => 0,
    ),
    'xmlsitemap' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'metatags' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'custom_breadcrumbs' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'redirect' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'panelizer' => array(
      'region' => 'main',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'book' => array(
      'region' => 'main',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_review_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_spoke_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Title',
    ),
    'additional_settings' => array(
      'region' => 'main',
      'weight' => '12',
      'has_required' => FALSE,
      'title' => 'Vertical tabs',
      'hidden' => 0,
    ),
    'actions' => array(
      'region' => 'footer',
      'weight' => '14',
      'has_required' => FALSE,
      'title' => 'Save',
      'hidden' => 0,
    ),
    'field_attached_images' => array(
      'region' => 'main',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Attached Images',
      'hidden' => 0,
    ),
    'field_body' => array(
      'region' => 'main',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Body',
      'hidden' => 0,
    ),
    'field_contributors' => array(
      'region' => 'main',
      'weight' => '11',
      'has_required' => FALSE,
      'title' => 'Contributors',
      'hidden' => 0,
    ),
    'field_embed' => array(
      'region' => 'main',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Embed',
      'hidden' => 0,
    ),
    'field_part_of' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Part of hub',
      'hidden' => 0,
    ),
    'field_pubstat' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Publication Status',
      'hidden' => 0,
    ),
    'field_representative_image' => array(
      'region' => 'main',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Representative Image',
      'hidden' => 0,
    ),
    'field_taxonomy' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Tags',
      'hidden' => 0,
    ),
    'xmlsitemap' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'metatags' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'custom_breadcrumbs' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'redirect' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'panelizer' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'book' => array(
      'region' => 'main',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_spoke_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_front_page_post';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_front_page_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_hub';
  $strongarm->value = array();
  $export['node_options_hub'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_review';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_spoke';
  $strongarm->value = array();
  $export['node_options_spoke'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_front_page_post';
  $strongarm->value = '1';
  $export['node_preview_front_page_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_hub';
  $strongarm->value = '1';
  $export['node_preview_hub'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_review';
  $strongarm->value = '1';
  $export['node_preview_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_spoke';
  $strongarm->value = '1';
  $export['node_preview_spoke'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_front_page_post';
  $strongarm->value = 1;
  $export['node_submitted_front_page_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_hub';
  $strongarm->value = 1;
  $export['node_submitted_hub'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = FALSE;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_review';
  $strongarm->value = 1;
  $export['node_submitted_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_spoke';
  $strongarm->value = 1;
  $export['node_submitted_spoke'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blogs/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_forum_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_forum_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = 1;
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'path_alias_whitelist';
  $strongarm->value = array(
    'node' => TRUE,
    'taxonomy' => TRUE,
    'user' => TRUE,
  );
  $export['path_alias_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vt__active_tab';
  $strongarm->value = 'edit-hide-front-page-post';
  $export['vt__active_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_city_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_city_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_country_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_country_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_organizations_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_organizations_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_state_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_state_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:name-raw]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_pattern';
  $strongarm->value = '[user:field_profile_name]';
  $export['realname_pattern'] = $strongarm;  

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__organizations';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__organizations'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__tags';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__tags'] = $strongarm;

  return $export;
  
}
