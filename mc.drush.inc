<?php

/**
 * Implements hook_drush_command().
 */
function mc_drush_command() {

  $items = array();

  $items['solr-metadata'] = array(
    'description' => "Refresh Apache Solr Multi-Site metadata.",
    'aliases' => array('amrm'),
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
function mc_drush_help($section) {
  switch ($section) {
    case 'drush:solr-metadata':
      return dt("Refresh Apache Solr Multi-Site metadata");
  }
}

/**
 * Implementation of drush_hook_COMMAND().
 */
function drush_mc_solr_metadata() {
  module_load_include('inc', 'apachesolr_multisitesearch', 'apachesolr_multisitesearch.index');
  // Delete all current variables and refresh them
  variable_del('apachesolr_multisitesearch_last_metadata_update');
  variable_del('apachesolr_multisitesearch_last_metadata_fetch');
  apachesolr_multisitesearch_refresh_metadata();
  drush_log(dt('The metadata has been refreshed.'), 'ok');
}
