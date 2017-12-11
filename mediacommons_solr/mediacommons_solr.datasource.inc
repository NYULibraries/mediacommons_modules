<?php

/**
 * Executes search depending on the conditions given.
 */
function mediacommons_solr_search_search_results($keys = NULL, $conditions = NULL, $search_page = NULL) {
  $results = $params = array();
  // Process the search form. Note that if there is $_POST data,
  // search_form_submit() will cause a redirect to search/[module path]/[keys],
  // which will get us back to this page callback. In other words, the search
  // form submits with POST but redirects to GET. This way we can keep
  // the search query URL clean as a whistle.
  if (empty($_POST['form_id'])
    || ($_POST['form_id'] != 'apachesolr_search_custom_page_search_form')
    && ($_POST['form_id'] != 'search_form')
    && ($_POST['form_id'] != 'search_block_form') ) {
    // Check input variables
            if (empty($search_page)) {
                $search_page = apachesolr_search_page_load('core_search');
                // Verify if it actually loaded
                if (empty($search_page)) {
                    // Something must have been really messed up.
                    apachesolr_failure(t('Solr search'), $keys);
                    return array();
                }
            }
            if (empty($conditions)) {
                $conditions = apachesolr_search_conditions_default($search_page);
            }

            // Sort options from the conditions array.
            // @see apachesolr_search_conditions_default()
            //   See This condition callback to find out how.
            $solrsort = isset($conditions['apachesolr_search_sort']) ? $conditions['apachesolr_search_sort'] : '';
            // What to do when we have an initial empty search
            $empty_search_behavior = isset($search_page['settings']['apachesolr_search_browse']) ? $search_page['settings']['apachesolr_search_browse'] : '';

            try {

                $solr = apachesolr_get_solr($search_page['env_id']);
                // Default parameters
                $params['fq'] = isset($conditions['fq']) ? $conditions['fq'] : array();
                $params['rows'] = $search_page['settings']['apachesolr_search_per_page'];

                if (empty($search_page['settings']['apachesolr_search_spellcheck'])) {
                    // Spellcheck needs to have a string as false/true
                    $params['spellcheck'] = 'false';
                }
                else {
                    $params['spellcheck'] = 'true';
                }

                // Empty text Behavior
                if (!$keys && !isset($conditions['f']) && ($empty_search_behavior == 'browse' || $empty_search_behavior == 'blocks')) {
                    // Pass empty search behavior as string on to apachesolr_search_search_page()
                    // Hardcoded apachesolr name since we rely on this for the facets
                    $context['page_id'] = $search_page['page_id'];
                    $context['search_type'] = 'apachesolr_search_browse';
                    apachesolr_search_run_empty('apachesolr', $params, $search_page['search_path'], $solr, $context);
                    $results['apachesolr_search_browse'] = $empty_search_behavior;

                    if ($empty_search_behavior == 'browse') {
                        // Hide sidebar blocks for content-area browsing instead.
                        apachesolr_suppress_blocks($search_page['env_id'], TRUE);
                    }
                }
                // Full text behavior. Triggers with a text search or a facet
                elseif (($keys || isset($conditions['f'])) || ($empty_search_behavior == 'results')) {
                    // Don't allow local params to pass through to EDismax from the url.
                    // We also remove any remaining leading {! since that causes a parse
                    // error in Solr.
                    $keys = preg_replace('/^(?:{![^}]*}\s*)*(?:{!\s*)*/',' ', $keys);
                    $params['q'] = $keys;
                    // Hardcoded apachesolr name since we rely on this for the facets
                    $context['page_id'] = $search_page['page_id'];
                    $context['search_type'] = 'apachesolr_search_results';

                    // If we execute more than 2 search and one of the search does
                    // not return value, we run into problems of the 2 queries failing
                    // to return a value
                    $n = 'apachesolr' . uniqid();

                    $results = apachesolr_search_run($n, $params, $solrsort, $search_page['search_path'], pager_find_page(), $solr, $context);
                    }
                }
                catch (Exception $e) {
                    watchdog('Apache Solr', nl2br(check_plain($e->getMessage())), NULL, WATCHDOG_ERROR);
                    apachesolr_failure(t('Solr search'), $keys);
                }
            }
            return $results;
}

/**
 * A module-defined block content function.
 */
function mediacommons_solr_user_content_by_uid($uid) {
  $content = '';
  $conditions = array(
    'fq' => array(
      'im_contributors:' . $uid,
    ),
  );
  $results = _mediacommons_solr_search('*:*', $conditions);
  if ($results) {
    /**
     * Adds search results to the render array.
     * We add "search_page" to the render_array so that mediacommons_solr_preprocess_search_results
     * can pick a title for the search page.
     * Not sure if this is the best way to do this; if you know "the right way"
     * please change
     */
    $render_array = array(
      '#theme' => 'search_results',
      '#results' => $results,
      '#module' => 'mediacommons_solr',
      '#search_page' => 'user_content_by_uid',
    );
    $content = render($render_array);
  }
  else {
    watchdog('MediaCommons Solr', "User $uid contributions, no results.", NULL, WATCHDOG_ERROR);
  }
  return $content;
}

function _mediacommons_solr_search($keys, $conditions) {
  /**
   * Include apachesolr_search forms
   */
  include_once(drupal_get_path('module', 'apachesolr_search') . '/apachesolr_search.pages.inc');
  $search_page = apachesolr_search_page_load(apachesolr_search_default_search_page());
  $query_params = drupal_get_query_parameters();
  $solrsort = isset($query_params['solrsort']) ? $query_params['solrsort'] : '';
  $results = mediacommons_solr_search_search_results($keys, $conditions, $search_page);
  if (!empty($results)) {
    return $results;
  }
  else {
    return FALSE;
  }
}
