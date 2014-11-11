<?php
/**
 * @file
 * mc_front_page_post_display.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mc_front_page_post_display_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mc_front_page_post_display_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function mc_front_page_post_display_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: homepage_more
  $nodequeues['homepage_more'] = array(
    'name' => 'homepage_more',
    'title' => 'Homepage More',
    'subqueue_title' => '',
    'size' => 4,
    'link' => 'Add to Homepage More Queue',
    'link_remove' => 'Remove from Homepage More Queue',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 1,
    'i18n' => 0,
    'types' => array(
      0 => 'front_page_post',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: mc_homepage_carousel_q
  $nodequeues['mc_homepage_carousel_q'] = array(
    'name' => 'mc_homepage_carousel_q',
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
    'types' => array(
      0 => 'front_page_post',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: mc_homepage_featured
  $nodequeues['mc_homepage_featured'] = array(
    'name' => 'mc_homepage_featured',
    'title' => 'Homepage Featured',
    'subqueue_title' => '',
    'size' => 6,
    'link' => 'Add to Homepage Featured Queue',
    'link_remove' => 'Remove from Homepage Featured Queue',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 1,
    'i18n' => 0,
    'types' => array(
      0 => 'front_page_post',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
