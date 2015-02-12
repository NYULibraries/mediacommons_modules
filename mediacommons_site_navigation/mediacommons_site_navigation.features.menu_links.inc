<?php
/**
 * @file
 * mediacommons_site_navigation.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mediacommons_site_navigation_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_all-content:previous
  $menu_links['main-menu_all-content:previous'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'previous',
    'router_path' => 'previous',
    'link_title' => 'All content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_all-content:previous',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('All content');
  t('Home');


  return $menu_links;
}
