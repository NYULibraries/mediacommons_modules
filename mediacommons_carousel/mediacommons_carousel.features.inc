<?php
/**
 * @file
 * mediacommons_carousel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mediacommons_carousel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mediacommons_carousel_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function mediacommons_carousel_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: homepage_carousel
  $nodequeues['homepage_carousel'] = array(
    'name' => 'homepage_carousel',
    'title' => 'Homepage Carousel',
    'subqueue_title' => '',
    'size' => 4,
    'link' => 'Add to Queue',
    'link_remove' => 'Remove from Queue',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 1,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'front_page_post',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
