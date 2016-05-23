<?php
/**
 * @file
 * mediacommons_content_type_review.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mediacommons_content_type_review_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create review content'.
  $permissions['create review content'] = array(
    'name' => 'create review content',
    'roles' => array(
      'administrator' => 'administrator',
      'cluster curator' => 'cluster curator',
      'contributor' => 'contributor',
      'managing editor' => 'managing editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any review content'.
  $permissions['delete any review content'] = array(
    'name' => 'delete any review content',
    'roles' => array(
      'administrator' => 'administrator',
      'cluster curator' => 'cluster curator',
      'managing editor' => 'managing editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own review content'.
  $permissions['delete own review content'] = array(
    'name' => 'delete own review content',
    'roles' => array(
      'administrator' => 'administrator',
      'cluster curator' => 'cluster curator',
      'contributor' => 'contributor',
      'managing editor' => 'managing editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any review content'.
  $permissions['edit any review content'] = array(
    'name' => 'edit any review content',
    'roles' => array(
      'administrator' => 'administrator',
      'cluster curator' => 'cluster curator',
      'managing editor' => 'managing editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own review content'.
  $permissions['edit own review content'] = array(
    'name' => 'edit own review content',
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
