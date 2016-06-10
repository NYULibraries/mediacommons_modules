MediaCommons Content Types
====================

This module extra code to support the feature. If you need to update the feature, be aware of a
small change in the code inside the files:

### files

mediacommons_content_types.features.field_instance.inc
mediacommons_content_types.features.field_base.inc

```php
/**
 * @file
 * mediacommons_content_types.features.field_base.inc
 */
/**
 * Implements hook_field_default_field_bases().
 */
function mediacommons_content_types_field_default_field_bases() {
  // add this line as the first line inside
  $fid = variable_get('mediacommons_content_types_default_image_fid', NULL);

  $field_bases = array();

```

```php
/**
 * @file
 * mediacommons_content_types.features.field_instance.inc
 */
/**
 * Implements hook_field_default_field_instances().
 */
function mediacommons_content_types_field_default_field_instances() {

  $field_instances = array();
  // add this line as the first line inside
  $fid = variable_get('mediacommons_content_types_default_image_fid', NULL);```
```

Also; do a search for 'default_image' inside this two files and change the interger value to $fid

e.g., 

```php
'settings' => array(
  'alt_field' => 1,
  'default_image' => $fid,
  'file_directory' => '',
  'file_extensions' => 'png gif jpg jpeg',
  'max_filesize' => '10 MB',
  'max_resolution' => '1200x640',
  'min_resolution' => '450x175',
  'title_field' => 1,
  'user_register_form' => FALSE,
),
```