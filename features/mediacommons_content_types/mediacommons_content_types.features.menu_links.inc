<?php
/**
 * @file
 * mediacommons_content_types.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mediacommons_content_types_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:node/1.
  $menu_links['main-menu_about:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'identifier' => 'main-menu_about:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
  );
  // Exported menu link: main-menu_archives:previous.
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
    'weight' => 10,
    'customized' => 1,
  );
  // Exported menu link: main-menu_call-for-contributions:node/2.
  $menu_links['main-menu_call-for-contributions:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Call for Contributions',
    'options' => array(
      'identifier' => 'main-menu_call-for-contributions:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 15,
    'customized' => 0,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Archives');
  t('Call for Contributions');
  t('home');

  return $menu_links;
}
