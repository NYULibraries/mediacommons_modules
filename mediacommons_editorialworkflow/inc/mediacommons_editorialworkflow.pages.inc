<?php

function mediacommons_editorialworkflow_contributor_title () {
  global $user;
  $name = realname_load($user);
  if (empty($name)) {
    $name = $user->name;
  }
  return t('Dashboard', array());
}

function mediacommons_editorialworkflow_contributor_dashboard_create_content () {

  global $user;

  $output = '';

  $types = node_type_get_types();

  $items = array();

  $br = theme('html_tag', array(
    'element' => array(
      '#tag' => 'br',
    ),
  ));

  $hr = theme('html_tag', array(
    'element' => array(
      '#tag' => 'hr',
    ),
  ));

  $output .= theme('html_tag', array(
    'element' => array(
      '#tag' => 'h2',
      '#attributes' => array(
        'class' => 'title',
        ),
      '#value' => t('Create new content'),
    ),
  ));

  $output .= $br;

  foreach ($types as $type) {
    if (user_access('create ' . $type->type . ' content')) {
      $type_url_str = str_replace('_', '-', $type->type);
      switch ($type->type) {
        case 'cluster' :
          $type->name = t('Create a New Cluster');
          break;
        case 'contributed_pieces' :
          $type->name = t('Contribute a New Piece');
          break;
      }
      $items[] = t(l( $type->name, 'node/add/' . $type_url_str, array('query' => array('destination' => 'contributor'))) . '<div class="description">'. $type->description .   '</div>');
    }
  }

  $output .= theme('item_list', array('items' => $items));

  $output .= $br;

  $container  = '';
  $container .= '<div id="dashboard" class="clearfix jquery-once-2-processed">';
  $container .= '<div id="dashboard_main" class="dashboard-region">';
  $container .= '<div class="region clearfix">';
  $container .= $output;
  $container .= '</div>';
  $container .= '</div>';
  $container .= '<div id="dashboard_sidebar" class="dashboard-region">';
  $container .= '<div class="region clearfix">';
  $container .= '</div>';
  $container .= '</div>';
  $container .= '</div>';

  return $container;

}

function mediacommons_editorialworkflow_contributor_dashboard () {

  global $user;

  drupal_set_breadcrumb(array(l('Home', '<front>'), l('Dashboard', 'contributor'),));

  // we need something more elegant. deal with this using access callback?
  if (!user_access('create spoke content')) return '';

  $output = '';

  $br = theme('html_tag', array(
    'element' => array(
      '#tag' => 'br',
    ),
  ));

  $hr = theme('html_tag', array(
    'element' => array(
      '#tag' => 'hr',
    ),
  ));

  $super = ($user->uid == 1) ? true : false;

  $role_contributor = user_role_load_by_name('contributor');

  $contributor = user_has_role($role_contributor->rid);

  $role_clustercurator = user_role_load_by_name('cluster curator');

  $clustercurator = user_has_role($role_clustercurator->rid);

  $role_managingeditor = user_role_load_by_name('managing editor');

  $managingeditor = user_has_role($role_managingeditor->rid);

  $output .= theme('html_tag', array(
    'element' => array(
      '#tag' => 'h2',
      '#attributes' => array(
        'class' => 'title',
        ),
      '#value' => t('Recent content'),
    ),
  ));
  $output .= $br;
  $output .= views_embed_view('recent_content', 'default', $user->uid);
  $output .= $hr;
  if ($super|| $contributor || $clustercurator || $managingeditor) {
    $view = views_embed_view('contributorscontent', 'default', $user->uid);
    $output .= $br;
    $output .= theme('html_tag', array(
      'element' => array(
        '#tag' => 'h2',
        '#attributes' => array(
          'class' => 'title',
          ),
        '#value' => t('Content I can contribute to'),
      ),
    ));
    $output .= $br;
    $output .= $view;
    $output .= $hr;
  }
  if ($super|| $clustercurator || $managingeditor) {
    $view_contributorsspokes_block_1 = views_embed_view('contributorscontent', 'block_1', $user->uid);
    $view_contributorsspokes_block_2 = views_embed_view('contributorscontent', 'block_2', $user->uid);
    $output .= $br;
    $output .= theme('html_tag', array(
      'element' => array(
        '#tag' => 'h2',
        '#attributes' => array(
          'class' => 'title',
          ),
        '#value' => t('Content I can curate'),
      ),
    ));
    $output .= $br;
    $output .= $view_contributorsspokes_block_1;
    $output .= $hr;
    $output .= $br;
    $output .= theme('html_tag', array(
      'element' => array(
        '#tag' => 'h2',
        '#attributes' => array(
          'class' => 'title',
          ),
        '#value' => t('Content I am a co-editor'),
      ),
    ));
    $output .= $br;
    $output .= $view_contributorsspokes_block_2;
    $output .= $hr;
    $output .= $br;
  }

  $block = module_invoke('search', 'block_view', 'search');

  $search = '';

  $search .= theme('html_tag', array(
    'element' => array(
      '#tag' => 'h2',
      '#attributes' => array(
        'class' => 'title',
        ),
      '#value' => t('Search'),
    ),
  ));

  $search .= $br;
  $search .= render($block);

  $container  = '';
  $container .= '<div id="dashboard" class="clearfix jquery-once-2-processed">';
  $container .= '<div id="dashboard_main" class="dashboard-region">';
  $container .= '<div class="region clearfix">';
  $container .= $output;
  $container .= '</div>';
  $container .= '</div>';
  $container .= '<div id="dashboard_sidebar" class="dashboard-region">';
  $container .= '<div class="region clearfix">';
  $container .= $search;
  $container .= '</div>';
  $container .= '</div>';
  $container .= '</div>';

  drupal_add_css(drupal_get_path('module', 'dashboard') . '/dashboard.css');

  return $container;

}
