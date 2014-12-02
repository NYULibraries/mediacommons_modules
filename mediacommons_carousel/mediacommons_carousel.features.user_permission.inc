<?php
/**
 * @file
 * mediacommons_carousel.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mediacommons_carousel_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(),
    'module' => 'flexslider',
  );

  return $permissions;
}
