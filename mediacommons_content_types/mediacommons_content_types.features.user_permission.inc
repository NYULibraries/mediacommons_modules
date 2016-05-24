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

  // Exported permission: 'create hub content'.
  $permissions['create hub content'] = array(
    'name' => 'create hub content',
    'roles' => array(
      'administrator' => 'administrator',
      'cluster curator' => 'cluster curator',
      'managing editor' => 'managing editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'cluster curator' => 'cluster curator',
      'contributor' => 'contributor',
      'managing editor' => 'managing editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create spoke content'.
  $permissions['create spoke content'] = array(
    'name' => 'create spoke content',
    'roles' => array(
      'administrator' => 'administrator',
      'cluster curator' => 'cluster curator',
      'contributor' => 'contributor',
      'managing editor' => 'managing editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any hub content'.
  $permissions['delete any hub content'] = array(
    'name' => 'delete any hub content',
    'roles' => array(
      'administrator' => 'administrator',
      'cluster curator' => 'cluster curator',
      'managing editor' => 'managing editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'cluster curator' => 'cluster curator',
      'managing editor' => 'managing editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any spoke content'.
  $permissions['delete any spoke content'] = array(
    'name' => 'delete any spoke content',
    'roles' => array(
      'administrator' => 'administrator',
      'cluster curator' => 'cluster curator',
      'managing editor' => 'managing editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own hub content'.
  $permissions['delete own hub content'] = array(
    'name' => 'delete own hub content',
    'roles' => array(
      'administrator' => 'administrator',
      'cluster curator' => 'cluster curator',
      'managing editor' => 'managing editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'cluster curator' => 'cluster curator',
      'managing editor' => 'managing editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own spoke content'.
  $permissions['delete own spoke content'] = array(
    'name' => 'delete own spoke content',
    'roles' => array(
      'administrator' => 'administrator',
      'cluster curator' => 'cluster curator',
      'managing editor' => 'managing editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any hub content'.
  $permissions['edit any hub content'] = array(
    'name' => 'edit any hub content',
    'roles' => array(
      'administrator' => 'administrator',
      'cluster curator' => 'cluster curator',
      'managing editor' => 'managing editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'cluster curator' => 'cluster curator',
      'managing editor' => 'managing editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any spoke content'.
  $permissions['edit any spoke content'] = array(
    'name' => 'edit any spoke content',
    'roles' => array(
      'administrator' => 'administrator',
      'cluster curator' => 'cluster curator',
      'managing editor' => 'managing editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own hub content'.
  $permissions['edit own hub content'] = array(
    'name' => 'edit own hub content',
    'roles' => array(
      'administrator' => 'administrator',
      'cluster curator' => 'cluster curator',
      'managing editor' => 'managing editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'cluster curator' => 'cluster curator',
      'contributor' => 'contributor',
      'managing editor' => 'managing editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own spoke content'.
  $permissions['edit own spoke content'] = array(
    'name' => 'edit own spoke content',
    'roles' => array(
      'administrator' => 'administrator',
      'cluster curator' => 'cluster curator',
      'contributor' => 'contributor',
      'managing editor' => 'managing editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
