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
 * Implements hook_image_default_styles().
 */
function mediacommons_image_styles_and_date_formats_image_default_styles() {
  $styles = array();

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

  // Exported image style: flexslider_full.
  $styles['flexslider_full'] = array(
    'effects' => array(
      0 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 500,
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'flexslider_full',
  );

  // Exported image style: flexslider_thumbnail.
  $styles['flexslider_thumbnail'] = array(
    'effects' => array(
      0 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 160,
          'height' => 100,
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'flexslider_thumbnail',
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

  return $styles;
}
