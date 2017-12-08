<?php

/**
 * This is invoked by apachesolr_search.module for the whole resultset returned
 * in a search.
 *
 * @param array $results
 *   The returned search results.
 * @param DrupalSolrQueryInterface $query
 *   The query for which we want to process the results from
 */
function mediacommons_solr_apachesolr_process_results(array &$results, DrupalSolrQueryInterface $query) {
	foreach ( $results as $id => $result ) {
		$results [$id] ['link'] = $results [$id] ['fields'] ['url'];
		$results [$id] ['project'] = $results [$id] ['fields'] ['ss_project'];
		$results [$id] ['project_url'] = $results [$id] ['fields'] ['ss_baseurl'];
		$results [$id] ['searchtype'] = $results [$id] ['fields'] ['ss_searchtype'];
		$results [$id] ['projectname'] = $results [$id] ['fields'] ['ss_projectname'];
		$results [$id] ['projectclass'] = $results [$id] ['fields'] ['ss_projectclass'];
		$results [$id] ['periodstart'] = $results [$id] ['fields'] ['ss_periodstart'];
		$results [$id] ['periodend'] = $results [$id] ['fields'] ['ss_periodend'];
		$results [$id] ['pubdate'] = $results [$id] ['fields'] ['ss_pubdate'];
	}
}

/**
 * Process variables for search-result.tpl.php.
 * https://api.drupal.org/api/drupal/modules%21search%21search.pages.inc/function/template_preprocess_search_result/7.x
 */
function mediacommons_solr_preprocess_search_result(&$variables) {
	$result = $variables ['result'];
	$bundle = $result ['bundle'];
	$variables ['theme_hook_suggestions'] [] = 'mediacommons_solr_search_result__base';
	$variables ['theme_hook_suggestions'] [] = 'mediacommons_solr_search_result__' . $bundle;
	$variables ['projectname'] = $result ['projectname'];
	$variables ['projectclass'] = $result ['projectclass'];
	$variables ['link'] = $result ['link'];
	$variables ['project'] = $result ['project'];
	$variables ['project_url'] = $result ['project_url'];
	$variables ['project_link'] = l ( $result ['projectname'], $result ['project_url'], array (
			'external' => TRUE
	) );
	$variables ['searchtype'] = $result ['searchtype'];
	// add project to class_array
	$variables ['classes_array'] [] = 'node-' . $result ['projectclass'];
	// add bundle to class_array
	$variables ['classes_array'] [] = 'node-' . $bundle;
	$variables ['classes_array'] [] = $result ['projectclass'];
	$call = 'mediacommons_solr_preprocess_search_result_' . $bundle;
	if (function_exists ( $call )) {
		$call ( $variables );
	}
}
function mediacommons_solr_preprocess_search_result_comment_node_spoke(&fields) {
	$node = $variables ['result'] ['fields'];

	dpm ( $fields );

	return;

	$variables ['classes_array'] [] = 'node-teaser';

	$variables ['classes_array'] [] = 'view-mode-teaser';

	// Representative Image
	$variables ['ri'] = json_decode ( $node->ss_ri );

	// Period start
	$variables ['created_date'] = $node->ss_createddate;

	$variables ['comment_count'] = $node->is_comment_count;

	// contributors
	$peoplelist = array (
			'peoplelist' => json_decode ( $node->ss_contributors )
	);

	$variables ['peoplelist'] = theme ( 'mediacommons_solr_hcard', $peoplelist );
}
function mediacommons_solr_preprocess_search_result_spoke(&$variables) {
	$node = $variables ['result'] ['node'];

	$variables ['classes_array'] [] = 'node-teaser';

	$variables ['classes_array'] [] = 'view-mode-teaser';

	// Representative Image
	$variables ['ri'] = json_decode ( $node->ss_ri );

	// Period start
	$variables ['created_date'] = $node->ss_createddate;

	$variables ['comment_count'] = $node->is_comment_count;

	// contributors
	$peoplelist = array (
			'peoplelist' => json_decode ( $node->ss_contributors )
	);

	$variables ['peoplelist'] = theme ( 'mediacommons_solr_hcard', $peoplelist );
}
function mediacommons_solr_preprocess_search_result_hub(&$variables) {
	$node = $variables ['result'] ['node'];

	$variables ['classes_array'] [] = 'clearfix';

	// Representative Image
	$variables ['ri'] = json_decode ( $node->ss_ri );

	// Period start
	$variables ['created_date'] = $node->ss_createddate;
	$variables ['cd_yyyy_mm_dd'] = $node->ss_cdyyyymmdd;

	// Period end
	$variables ['end_date'] = $node->ss_enddate;
	$variables ['ed_yyyy_mm_dd'] = $node->ss_edyyyymmdd;

	/**
	 * Curated by:
	 * Data needed: All of the curators to a hub, and the links to their
	 * profile pages, and their organization, and the link to the org page
	 * @theme_file: templates/mediacommons_solr_hcard.tpl.php
	 */
	$peoplelist = array (
			'peoplelist' => json_decode ( $node->ss_curatorseditors )
	);

	$variables ['peoplelist'] = theme ( 'mediacommons_solr_hcard', $peoplelist );
}

/**
 * Process variables for search-results.tpl.php.
 *
 * The $variables array contains the following arguments:
 * - $results: Search results array.
 * - $module: Module the search results came from (module implementing
 * hook_search_info()).
 *
 * @see search-results.tpl.php
 */
function mediacommons_solr_preprocess_search_results(&$variables) {
	switch ($variables ['search_page']) {
		case 'user_content_by_uid' :
			$title = t ( 'As author' );
			break;
		case 'user_comments_by_uid' :
			$title = t ( 'As commenter' );
			break;
		default :
			$title = t ( 'Search results' );
	}
	$variables ['title'] = $title;
}
