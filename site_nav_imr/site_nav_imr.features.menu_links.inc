<?php
/**
 * @file
 * site_nav_imr.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function site_nav_imr_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:node/1942
  $menu_links['main-menu_about:node/1942'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1942',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'identifier' => 'main-menu_about:node/1942',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_archives:previous
  $menu_links['main-menu_archives:previous'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'previous',
    'router_path' => 'previous',
    'link_title' => 'Archives',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_archives:previous',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_current-calls:node/1943
  $menu_links['main-menu_current-calls:node/1943'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1943',
    'router_path' => 'node/%',
    'link_title' => 'Current Calls',
    'options' => array(
      'identifier' => 'main-menu_current-calls:node/1943',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
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
  t('About');
  t('Archives');
  t('Current Calls');
  t('Home');

  return $menu_links;
}
