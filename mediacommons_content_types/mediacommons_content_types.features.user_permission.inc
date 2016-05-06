<?php
/**
 * @file
 * mediacommons_content_types.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mediacommons_content_types_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer manualcrop settings'.
  $permissions['administer manualcrop settings'] = array(
    'name' => 'administer manualcrop settings',
    'roles' => array(),
    'module' => 'manualcrop',
  );

  // Exported permission: 'administer mediacommons filters'.
  $permissions['administer mediacommons filters'] = array(
    'name' => 'administer mediacommons filters',
    'roles' => array(),
    'module' => 'mediacommons_filter',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(),
    'module' => 'uuid',
  );

  // Exported permission: 'use manualcrop'.
  $permissions['use manualcrop'] = array(
    'name' => 'use manualcrop',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'manualcrop',
  );

  return $permissions;
}
