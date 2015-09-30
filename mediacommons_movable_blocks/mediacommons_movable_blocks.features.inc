<?php
/**
 * @file
 * mediacommons_movable_blocks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mediacommons_movable_blocks_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mediacommons_movable_blocks_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}