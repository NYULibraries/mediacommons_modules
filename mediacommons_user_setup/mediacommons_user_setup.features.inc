<?php
/**
 * @file
 * mediacommons_user_setup.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mediacommons_user_setup_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
