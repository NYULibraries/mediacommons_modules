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
