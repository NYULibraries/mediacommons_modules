<?php
/**
 * @file
 * mediacommons_ds_settings.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mediacommons_ds_settings_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|front_page_post|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'front_page_post';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'search_info' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_rlink' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|front_page_post|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|hub|hub_home_vertical';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'hub';
  $ds_fieldsetting->view_mode = 'hub_home_vertical';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h1',
          'fi-cl' => 'hub-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_spokes' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|hub|hub_home_vertical'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|hub|hub_teaser_for_archive_page';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'hub';
  $ds_fieldsetting->view_mode = 'hub_teaser_for_archive_page';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|hub|hub_teaser_for_archive_page'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|hub|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'hub';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => 'spoke-title node-teaser-title ',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<span class="label">Hub: </span>',
        ),
      ),
    ),
    'search_snippet' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_contributors' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Contributors:',
          'prefix' => 'Contributors:',
        ),
      ),
    ),
    'field_representative_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'thumb',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|hub|search_result'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function mediacommons_ds_settings_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'contributors_to_this_spoke';
  $ds_field->label = 'Contributors to this spoke';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|contributors_this_spoke-block',
    'block_render' => '3',
  );
  $export['contributors_to_this_spoke'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'hub_navigation';
  $ds_field->label = 'Hub Navigation';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'spoke|full';
  $ds_field->properties = array(
    'block' => 'views|2b17eeeac3341e947967a295b2c96265',
    'block_render' => '3',
  );
  $export['hub_navigation'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'related_reviews';
  $ds_field->label = 'Related Reviews';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'spoke|full_intransition';
  $ds_field->properties = array(
    'block' => 'views|reviews_of_this_spoke-block',
    'block_render' => '3',
  );
  $export['related_reviews'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'reviewed_by';
  $ds_field->label = 'Reviewed by';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'spoke|teaser';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['reviewed_by'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'spoke_add_comments_intransition';
  $ds_field->label = 'Spoke Add Comments: InTransition';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'spoke|full_intransition';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['spoke_add_comments_intransition'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mediacommons_ds_settings_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|front_page_post|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'front_page_post';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_project',
        1 => 'field_rlink',
        2 => 'field_body',
        3 => 'search_info',
      ),
    ),
    'fields' => array(
      'field_project' => 'ds_content',
      'field_rlink' => 'ds_content',
      'field_body' => 'ds_content',
      'search_info' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|front_page_post|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|hub|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'hub';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_curators_editors',
        1 => 'field_co_editor',
        2 => 'field_contributors',
        3 => 'field_spokes',
        4 => 'field_representative_image',
        5 => 'field_body',
        6 => 'field_period',
        7 => 'field_pubstat',
      ),
    ),
    'fields' => array(
      'field_curators_editors' => 'left',
      'field_co_editor' => 'left',
      'field_contributors' => 'left',
      'field_spokes' => 'left',
      'field_representative_image' => 'left',
      'field_body' => 'left',
      'field_period' => 'left',
      'field_pubstat' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|hub|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|hub|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'hub';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'hubhead',
        1 => 'group_flex2',
        2 => 'field_representative_image',
        3 => 'field_image_rights',
        4 => 'field_spokes',
        5 => 'title',
        6 => 'field_period',
        7 => 'field_curators_editors',
        8 => 'field_co_editor',
        9 => 'field_body',
        10 => 'field_taxonomy',
      ),
    ),
    'fields' => array(
      'hubhead' => 'ds_content',
      'group_flex2' => 'ds_content',
      'field_representative_image' => 'ds_content',
      'field_image_rights' => 'ds_content',
      'field_spokes' => 'ds_content',
      'title' => 'ds_content',
      'field_period' => 'ds_content',
      'field_curators_editors' => 'ds_content',
      'field_co_editor' => 'ds_content',
      'field_body' => 'ds_content',
      'field_taxonomy' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|hub|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|hub|hub_home_vertical';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'hub';
  $ds_layout->view_mode = 'hub_home_vertical';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_hubhead',
        1 => 'group_flex2',
        2 => 'field_representative_image',
        3 => 'field_spokes',
        4 => 'field_image_rights',
        5 => 'title',
        6 => 'field_period',
        7 => 'field_curators_editors',
        8 => 'field_co_editor',
        9 => 'field_body',
      ),
    ),
    'fields' => array(
      'group_hubhead' => 'ds_content',
      'group_flex2' => 'ds_content',
      'field_representative_image' => 'ds_content',
      'field_spokes' => 'ds_content',
      'field_image_rights' => 'ds_content',
      'title' => 'ds_content',
      'field_period' => 'ds_content',
      'field_curators_editors' => 'ds_content',
      'field_co_editor' => 'ds_content',
      'field_body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => 'class="view-mode-full node node-hub ds-1col view-mode-hub-home"',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|hub|hub_home_vertical'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|hub|hub_teaser_for_archive_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'hub';
  $ds_layout->view_mode = 'hub_teaser_for_archive_page';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_representative_image',
        2 => 'field_period',
        3 => 'field_curators_editors',
        4 => 'field_co_editor',
        5 => 'field_spokes',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_representative_image' => 'ds_content',
      'field_period' => 'ds_content',
      'field_curators_editors' => 'ds_content',
      'field_co_editor' => 'ds_content',
      'field_spokes' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => 'class="hub-teaser-archive"',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|hub|hub_teaser_for_archive_page'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|hub|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'hub';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_representative_image',
        1 => 'title',
        2 => 'field_period',
        3 => 'field_curators_editors',
        4 => 'field_co_editor',
        5 => 'field_contributors',
        6 => 'search_snippet',
      ),
    ),
    'fields' => array(
      'field_representative_image' => 'ds_content',
      'title' => 'ds_content',
      'field_period' => 'ds_content',
      'field_curators_editors' => 'ds_content',
      'field_co_editor' => 'ds_content',
      'field_contributors' => 'ds_content',
      'search_snippet' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|hub|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|hub|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'hub';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_flex1',
        1 => 'group_flex2',
        2 => 'field_representative_image',
        3 => 'title',
        4 => 'field_period',
        5 => 'field_curators_editors',
        6 => 'field_spokes',
      ),
    ),
    'fields' => array(
      'group_flex1' => 'ds_content',
      'group_flex2' => 'ds_content',
      'field_representative_image' => 'ds_content',
      'title' => 'ds_content',
      'field_period' => 'ds_content',
      'field_curators_editors' => 'ds_content',
      'field_spokes' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|hub|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|review|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'review';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_reviewer',
        1 => 'title',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_reviewer' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|review|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|review|full_intransition';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'review';
  $ds_layout->view_mode = 'full_intransition';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_isreviewof',
        2 => 'field_reviewer',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_isreviewof' => 'ds_content',
      'field_reviewer' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|review|full_intransition'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|spoke|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'spoke';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|spoke|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|spoke|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'spoke';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'post_date',
        1 => 'title',
        2 => 'contributors_to_this_spoke',
      ),
      'left' => array(
        3 => 'field_embed',
        4 => 'field_body',
        5 => 'field_taxonomy',
        6 => 'comments',
      ),
    ),
    'fields' => array(
      'post_date' => 'header',
      'title' => 'header',
      'contributors_to_this_spoke' => 'header',
      'field_embed' => 'left',
      'field_body' => 'left',
      'field_taxonomy' => 'left',
      'comments' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|spoke|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|spoke|full_intransition';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'spoke';
  $ds_layout->view_mode = 'full_intransition';
  $ds_layout->layout = 'ds_3col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
        1 => 'contributors_to_this_spoke',
        2 => 'post_date',
      ),
      'left' => array(
        3 => 'field_embed',
      ),
      'middle' => array(
        4 => 'field_body',
      ),
      'right' => array(
        5 => 'related_reviews',
      ),
      'footer' => array(
        6 => 'field_taxonomy',
        7 => 'spoke_add_comments_intransition',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'contributors_to_this_spoke' => 'header',
      'post_date' => 'header',
      'field_embed' => 'left',
      'field_body' => 'middle',
      'related_reviews' => 'right',
      'field_taxonomy' => 'footer',
      'spoke_add_comments_intransition' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|spoke|full_intransition'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|spoke|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'spoke';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_attached_images',
        1 => 'group_meta',
        2 => 'title',
        3 => 'field_contributors',
        4 => 'post_date',
        5 => 'comment_count_spokes',
        6 => 'search_snippet',
      ),
    ),
    'fields' => array(
      'field_attached_images' => 'ds_content',
      'group_meta' => 'ds_content',
      'title' => 'ds_content',
      'field_contributors' => 'ds_content',
      'post_date' => 'ds_content',
      'comment_count_spokes' => 'ds_content',
      'search_snippet' => 'ds_content',
    ),
    'limit' => array(
      'field_attached_images' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|spoke|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|spoke|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'spoke';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_attached_images',
        1 => 'title',
        2 => 'group_spoke_teaser_meta',
        3 => 'field_contributors',
        4 => 'reviewed_by',
        5 => 'post_date',
        6 => 'comment_count_spokes',
      ),
    ),
    'fields' => array(
      'field_attached_images' => 'ds_content',
      'title' => 'ds_content',
      'group_spoke_teaser_meta' => 'ds_content',
      'field_contributors' => 'ds_content',
      'reviewed_by' => 'ds_content',
      'post_date' => 'ds_content',
      'comment_count_spokes' => 'ds_content',
    ),
    'limit' => array(
      'field_attached_images' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|spoke|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function mediacommons_ds_settings_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'hub_teaser_for_archive_page';
  $ds_view_mode->label = 'Hub teaser for archive page';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['hub_teaser_for_archive_page'] = $ds_view_mode;

  return $export;
}
