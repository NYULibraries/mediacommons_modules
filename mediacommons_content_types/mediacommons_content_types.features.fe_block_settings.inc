<?php
/**
 * @file
 * mediacommons_content_types.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mediacommons_content_types_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-comments_from_user-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'comments_from_user-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mediacommons' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons',
        'weight' => 0,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-posts_contributed-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'posts_contributed-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mediacommons' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons',
        'weight' => 0,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-users_in_an_org-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'users_in_an_org-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mediacommons' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons',
        'weight' => 0,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );  

  $export['views-641a3efdcac935ebfa7e53c18d7e1751'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '641a3efdcac935ebfa7e53c18d7e1751',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mediacommons' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons',
        'weight' => 0,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-contributors_this_hub-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'contributors_this_hub-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mediacommons' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'mediacommons',
        'weight' => 0,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-mc_recent_comments-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'mc_recent_comments-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mediacommons' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'mediacommons',
        'weight' => 2,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-mc_recent_comments-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'mc_recent_comments-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mediacommons' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons',
        'weight' => 0,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-mc_recent_comments-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'mc_recent_comments-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mediacommons' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons',
        'weight' => 0,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-mc_recent_comments-block_3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'mc_recent_comments-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mediacommons' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons',
        'weight' => 0,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-tags-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'tags-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mediacommons' => array(
        'region' => 'homepage_sidebar',
        'status' => 1,
        'theme' => 'mediacommons',
        'weight' => 2,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-tags-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'tags-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mediacommons' => array(
        'region' => 'sidebar_tagpages',
        'status' => 1,
        'theme' => 'mediacommons',
        'weight' => 0,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-top_organizations-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'top_organizations-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mediacommons' => array(
        'region' => 'homepage_sidebar',
        'status' => 1,
        'theme' => 'mediacommons',
        'weight' => 3,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );  

  $export['views-curated_hubs-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'curated_hubs-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mediacommons' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons',
        'weight' => 0,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-reviews_by-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'reviews_by-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mediacommons' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons',
        'weight' => 0,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-users_tagged-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'users_tagged-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mediacommons' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons',
        'weight' => 0,
      ),
      'mediacommons_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons_admin',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
