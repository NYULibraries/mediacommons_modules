<?php

/**
 * Implements hook_drush_command().
 */
function mediacommons_utilities_drush_command() {

  $items = array();

  $items['set-theme-setting-class-name'] = array(
    'description' => "Set theme settings Special Body Class Name.",
    'arguments' => array(
      'class' => 'Special Body Class Name',
    ),
    'options' => array(
      'option-name' => array(
        'description' => 'Set the Special Body Class Name.',
        'example-value' => 'e.g., tne',
      ),
    ),
    'aliases' => array('stscn'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
  );

  return $items;
}

/**
 * Implements hook_drush_help().
 *
 * @param
 *   A string with the help section (prepend with 'drush:')
 *
 * @return
 *   A string with the help text for your command.
 */
function mediacommons_utilities_drush_help($section) {
  switch ($section) {
    case 'drush:set-theme-setting-class-name':
      return dt("Set theme settings Special Body Class Name.");
  }
}

/**
 * Implementation of drush_hook_COMMAND().
 */
function drush_mediacommons_utilities_set_theme_setting_class_name( $class ) {

  $settings = variable_get('theme_mediacommons_settings');
  
  $settings['special_body_class'] = $class;
  
  variable_set('theme_mediacommons_settings', $settings);

}
