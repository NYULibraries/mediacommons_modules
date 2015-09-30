<?php
/**
 * @file
 * mediacommons_homepage_featured.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mediacommons_homepage_featured_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'recent_6_hubs';
  $view->description = 'For use on homepage';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Recent 6 hubs';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Featured Content';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Representative Image */
  $handler->display->display_options['fields']['field_representative_image']['id'] = 'field_representative_image';
  $handler->display->display_options['fields']['field_representative_image']['table'] = 'field_data_field_representative_image';
  $handler->display->display_options['fields']['field_representative_image']['field'] = 'field_representative_image';
  $handler->display->display_options['fields']['field_representative_image']['label'] = '';
  $handler->display->display_options['fields']['field_representative_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_representative_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_representative_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_representative_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Start and end dates */
  $handler->display->display_options['fields']['field_period']['id'] = 'field_period';
  $handler->display->display_options['fields']['field_period']['table'] = 'field_data_field_period';
  $handler->display->display_options['fields']['field_period']['field'] = 'field_period';
  $handler->display->display_options['fields']['field_period']['label'] = '';
  $handler->display->display_options['fields']['field_period']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_period']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_period']['empty'] = 'No time range data available';
  $handler->display->display_options['fields']['field_period']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Curated by */
  $handler->display->display_options['fields']['field_curators_editors']['id'] = 'field_curators_editors';
  $handler->display->display_options['fields']['field_curators_editors']['table'] = 'field_data_field_curators_editors';
  $handler->display->display_options['fields']['field_curators_editors']['field'] = 'field_curators_editors';
  $handler->display->display_options['fields']['field_curators_editors']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_curators_editors']['element_wrapper_class'] = 'peoplelist';
  $handler->display->display_options['fields']['field_curators_editors']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_curators_editors']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_curators_editors']['delta_offset'] = '0';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = '.featured-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'featured-item-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['recent_6_hubs'] = $view;

  $view = new view();
  $view->name = 'single_hub_latest';
  $view->description = 'For use on homepage';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'single_hub_latest';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Representative Image */
  $handler->display->display_options['fields']['field_representative_image']['id'] = 'field_representative_image';
  $handler->display->display_options['fields']['field_representative_image']['table'] = 'field_data_field_representative_image';
  $handler->display->display_options['fields']['field_representative_image']['field'] = 'field_representative_image';
  $handler->display->display_options['fields']['field_representative_image']['label'] = '';
  $handler->display->display_options['fields']['field_representative_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_representative_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_representative_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_representative_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Start and end dates */
  $handler->display->display_options['fields']['field_period']['id'] = 'field_period';
  $handler->display->display_options['fields']['field_period']['table'] = 'field_data_field_period';
  $handler->display->display_options['fields']['field_period']['field'] = 'field_period';
  $handler->display->display_options['fields']['field_period']['label'] = '';
  $handler->display->display_options['fields']['field_period']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_period']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_period']['empty'] = 'No time range data available';
  $handler->display->display_options['fields']['field_period']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Curated by */
  $handler->display->display_options['fields']['field_curators_editors']['id'] = 'field_curators_editors';
  $handler->display->display_options['fields']['field_curators_editors']['table'] = 'field_data_field_curators_editors';
  $handler->display->display_options['fields']['field_curators_editors']['field'] = 'field_curators_editors';
  $handler->display->display_options['fields']['field_curators_editors']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_curators_editors']['element_wrapper_class'] = 'peoplelist';
  $handler->display->display_options['fields']['field_curators_editors']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_curators_editors']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_curators_editors']['delta_offset'] = '0';
  /* Field: Content: Contributors */
  $handler->display->display_options['fields']['field_contributors']['id'] = 'field_contributors';
  $handler->display->display_options['fields']['field_contributors']['table'] = 'field_data_field_contributors';
  $handler->display->display_options['fields']['field_contributors']['field'] = 'field_contributors';
  $handler->display->display_options['fields']['field_contributors']['element_type'] = '0';
  $handler->display->display_options['fields']['field_contributors']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_contributors']['element_wrapper_class'] = 'peoplelist';
  $handler->display->display_options['fields']['field_contributors']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_contributors']['delta_offset'] = '0';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'third_mode';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Single Hub Latest';
  $export['single_hub_latest'] = $view;

  return $export;
}