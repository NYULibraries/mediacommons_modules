<?php
/**
 * @file
 * umbrella_recent_6_fpp.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function umbrella_recent_6_fpp_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_featured_image_thumb'
  $field_bases['field_featured_image_thumb'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_featured_image_thumb',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  return $field_bases;
}
