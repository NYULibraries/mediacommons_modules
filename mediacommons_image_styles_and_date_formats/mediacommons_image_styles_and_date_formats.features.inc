<?php
/**
 * @file
 * mediacommons_image_styles_and_date_formats.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mediacommons_image_styles_and_date_formats_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function mediacommons_image_styles_and_date_formats_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['l, F j, Y'] = 'l, F j, Y';
  $custom_date_formats['n/j/Y'] = 'n/j/Y';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function mediacommons_image_styles_and_date_formats_date_format_types() {
  $format_types = array();
  // Exported date format type: long_no_time
  $format_types['long_no_time'] = 'Long no time';
  // Exported date format type: short_no_time
  $format_types['short_no_time'] = 'Short no time';
  return $format_types;
}

/**
 * Implements hook_image_default_styles().
 */
function mediacommons_image_styles_and_date_formats_image_default_styles() {
  $styles = array();

  // Exported image style: 16_9_ratio.
  $styles['16_9_ratio'] = array(
    'label' => '16:9 ratio',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 270,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 21_9_ratio.
  $styles['21_9_ratio'] = array(
    'label' => '21:9 ratio',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 504,
          'height' => 216,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 450_by_175.
  $styles['450_by_175'] = array(
    'label' => '450 by 175',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 450,
          'height' => 175,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: homepage_featured_item__480x320_.
  $styles['homepage_featured_item__480x320_'] = array(
    'label' => 'Homepage Featured Item (480x320)',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
      9 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 480,
          'height' => 320,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: large.
  $styles['large'] = array(
    'label' => 'Large (480x480)',
    'effects' => array(
      0 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 480,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: manual_crop_480_320.
  $styles['manual_crop_480_320'] = array(
    'label' => 'Manual Crop 480 320',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 480,
          'height' => 320,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'manual_crop_480_320',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: max_width_600px.
  $styles['max_width_600px'] = array(
    'label' => 'Max width 600px',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: medium.
  $styles['medium'] = array(
    'label' => 'Medium (220x220)',
    'effects' => array(
      0 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => 220,
          'upscale' => 1,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: profile_page_pic.
  $styles['profile_page_pic'] = array(
    'label' => 'Profile Page Pic',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 90,
          'height' => 90,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile_pic_small.
  $styles['profile_pic_small'] = array(
    'label' => 'Profile Pic Small',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumbnail.
  $styles['thumbnail'] = array(
    'label' => 'Thumbnail (100x100)',
    'effects' => array(
      0 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'upscale' => 1,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: thumbnail__120x80_.
  $styles['thumbnail__120x80_'] = array(
    'label' => 'Thumbnail (120x80)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 80,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
