<?php
/**
 * @file
 * mediacommons_feature.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function mediacommons_feature_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'Dev Discovery';
  $environment->url = 'http://dev-discovery.dlib.nyu.edu:8080/solr3_discovery/core0';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_read_only' => '0',
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'hub',
      1 => 'page',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
