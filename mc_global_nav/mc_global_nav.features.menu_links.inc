<?php
/**
 * @file
 * mc_global_nav.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mc_global_nav_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-mcglobalnav_alt-academy:http://devmc.dlib.nyu.edu/redesign/alt-ac/
  $menu_links['menu-mcglobalnav_alt-academy:http://devmc.dlib.nyu.edu/redesign/alt-ac/'] = array(
    'menu_name' => 'menu-mcglobalnav',
    'link_path' => 'http://devmc.dlib.nyu.edu/redesign/alt-ac/',
    'router_path' => '',
    'link_title' => '#Alt-Academy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-mcglobalnav_alt-academy:http://devmc.dlib.nyu.edu/redesign/alt-ac/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-mcglobalnav_front-page:<front>',
  );
  // Exported menu link: menu-mcglobalnav_edit-my-account:menutoken/54cbda6e25416
  $menu_links['menu-mcglobalnav_edit-my-account:menutoken/54cbda6e25416'] = array(
    'menu_name' => 'menu-mcglobalnav',
    'link_path' => 'menutoken/54cbda6e25416',
    'router_path' => 'menutoken/%',
    'link_title' => 'Edit My Account',
    'options' => array(
      'menu_token_link_path' => '[current-user:edit-url]',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-mcglobalnav_edit-my-account:menutoken/54cbda6e25416',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-mcglobalnav_my-account:user',
  );
  // Exported menu link: menu-mcglobalnav_field-guide:http://devmc.dlib.nyu.edu/redesign/fieldguide
  $menu_links['menu-mcglobalnav_field-guide:http://devmc.dlib.nyu.edu/redesign/fieldguide'] = array(
    'menu_name' => 'menu-mcglobalnav',
    'link_path' => 'http://devmc.dlib.nyu.edu/redesign/fieldguide',
    'router_path' => '',
    'link_title' => 'Field Guide',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-mcglobalnav_field-guide:http://devmc.dlib.nyu.edu/redesign/fieldguide',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-mcglobalnav_front-page:<front>',
  );
  // Exported menu link: menu-mcglobalnav_front-page:<front>
  $menu_links['menu-mcglobalnav_front-page:<front>'] = array(
    'menu_name' => 'menu-mcglobalnav',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Front page',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-mcglobalnav_front-page:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-mcglobalnav_in-media-res:http://devmc.dlib.nyu.edu/redesign/imr/
  $menu_links['menu-mcglobalnav_in-media-res:http://devmc.dlib.nyu.edu/redesign/imr/'] = array(
    'menu_name' => 'menu-mcglobalnav',
    'link_path' => 'http://devmc.dlib.nyu.edu/redesign/imr/',
    'router_path' => '',
    'link_title' => 'In Media Res',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-mcglobalnav_in-media-res:http://devmc.dlib.nyu.edu/redesign/imr/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-mcglobalnav_front-page:<front>',
  );
  // Exported menu link: menu-mcglobalnav_intransition:http://devmc.dlib.nyu.edu/redesign/in-transition/
  $menu_links['menu-mcglobalnav_intransition:http://devmc.dlib.nyu.edu/redesign/in-transition/'] = array(
    'menu_name' => 'menu-mcglobalnav',
    'link_path' => 'http://devmc.dlib.nyu.edu/redesign/in-transition/',
    'router_path' => '',
    'link_title' => '[in]Transition',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-mcglobalnav_intransition:http://devmc.dlib.nyu.edu/redesign/in-transition/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-mcglobalnav_front-page:<front>',
  );
  // Exported menu link: menu-mcglobalnav_log-in:user/login
  $menu_links['menu-mcglobalnav_log-in:user/login'] = array(
    'menu_name' => 'menu-mcglobalnav',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log in',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-mcglobalnav_log-in:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 17,
    'customized' => 1,
  );
  // Exported menu link: menu-mcglobalnav_log-out:user/logout
  $menu_links['menu-mcglobalnav_log-out:user/logout'] = array(
    'menu_name' => 'menu-mcglobalnav',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-mcglobalnav_log-out:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-mcglobalnav_my-account:user',
  );
  // Exported menu link: menu-mcglobalnav_mediacommons-press:<front>
  $menu_links['menu-mcglobalnav_mediacommons-press:<front>'] = array(
    'menu_name' => 'menu-mcglobalnav',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'MediaCommons Press',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-mcglobalnav_mediacommons-press:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-mcglobalnav_front-page:<front>',
  );
  // Exported menu link: menu-mcglobalnav_my-account:user
  $menu_links['menu-mcglobalnav_my-account:user'] = array(
    'menu_name' => 'menu-mcglobalnav',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'My Account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-mcglobalnav_my-account:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 12,
    'customized' => 1,
  );
  // Exported menu link: menu-mcglobalnav_the-new-everyday:http://devmc.dlib.nyu.edu/redesign/tne/
  $menu_links['menu-mcglobalnav_the-new-everyday:http://devmc.dlib.nyu.edu/redesign/tne/'] = array(
    'menu_name' => 'menu-mcglobalnav',
    'link_path' => 'http://devmc.dlib.nyu.edu/redesign/tne/',
    'router_path' => '',
    'link_title' => 'The New Everyday',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-mcglobalnav_the-new-everyday:http://devmc.dlib.nyu.edu/redesign/tne/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-mcglobalnav_front-page:<front>',
  );
  // Exported menu link: menu-mcglobalnav_view-my-contributions:user
  $menu_links['menu-mcglobalnav_view-my-contributions:user'] = array(
    'menu_name' => 'menu-mcglobalnav',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'View my contributions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-mcglobalnav_view-my-contributions:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-mcglobalnav_my-account:user',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('#Alt-Academy');
  t('Edit My Account');
  t('Field Guide');
  t('Front page');
  t('In Media Res');
  t('Log in');
  t('Log out');
  t('MediaCommons Press');
  t('My Account');
  t('The New Everyday');
  t('View my contributions');
  t('[in]Transition');


  return $menu_links;
}
