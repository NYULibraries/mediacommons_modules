<?php
/**
 * @file
 * mediacommons_carousel.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mediacommons_carousel_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepage_carousel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Carousel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Homepage Carousel';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'mediacommons_home_page';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'homepage_carousel' => 'homepage_carousel',
  );
  /* Field: Content: Carousel Image */
  $handler->display->display_options['fields']['field_carousel_image']['id'] = 'field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['table'] = 'field_data_field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['field'] = 'field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carousel_image']['type'] = 'flexslider';
  $handler->display->display_options['fields']['field_carousel_image']['settings'] = array(
    'optionset' => 'mediacommons_home_page',
    'image_style' => 'flexslider_full',
    'caption' => 0,
  );
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['homepage_carousel'] = $view;

  return $export;
}