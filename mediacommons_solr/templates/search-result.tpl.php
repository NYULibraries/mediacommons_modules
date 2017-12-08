<?php

/**
 * @file
 * Default theme implementation for displaying a single search result.
 *
 * This template renders a single search result and is collected into
 * search-results.tpl.php. This and the parent template are
 * dependent to one another sharing the markup for definition lists.
 *
 * Available variables:
 * - $url: URL of the result.
 * - $title: Title of the result.
 * - $snippet: A small preview of the result. Does not apply to user searches.
 * - $info: String of all the meta information ready for print. Does not apply
 *   to user searches.
 * - $info_split: Contains same data as $info, split into a keyed array.
 * - $module: The machine-readable name of the module (tab) being searched, such
 *   as "node" or "user".
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Default keys within $info_split:
 * - $info_split['module']: The module that implemented the search query.
 * - $info_split['user']: Author of the node linked to users profile. Depends
 *   on permission.
 * - $info_split['date']: Last update of the node. Short formatted.
 * - $info_split['comment']: Number of comments output as "% comments", %
 *   being the count. Depends on comment.module.
 *
 * Other variables:
 * - $classes_array: Array of HTML class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $title_attributes_array: Array of HTML attributes for the title. It is
 *   flattened into a string within the variable $title_attributes.
 * - $content_attributes_array: Array of HTML attributes for the content. It is
 *   flattened into a string within the variable $content_attributes.
 *
 * Since $info_split is keyed, a direct print of the item is possible.
 * This array does not apply to user searches so it is recommended to check
 * for its existence before printing. The default keys of 'type', 'user' and
 * 'date' always exist for node searches. Modules may provide other data.
 * @code
 *   <?php if (isset($info_split['comment'])): ?>
 *     <span class="info-comment">
 *       <?php print $info_split['comment']; ?>
 *     </span>
 *   <?php endif; ?>
 * @endcode
 *
 * To check for all available data within $info_split, use the code below.
 * @code
 *   <?php print '<pre>'. check_plain(print_r($info_split, 1)) .'</pre>'; ?>
 * @endcode
 *
 * @see template_preprocess()
 * @see template_preprocess_search_result()
 * @see template_process()
 *
 * @ingroup themeable
 */



?>

<h1><?php print $project ?></h1>
 
<?php if ($bundle == "spoke") { 
  $nodeObject = $variables["result"]["node"];
  $x = $nodeObject->ds_created;
  $cd = date_create($x);
  $created_date = date_format($cd,"F d, Y");
  ?>
  <li class="view-mode-teaser node-teaser node-spoke <?php print $classes; ?> node-<?php print $projectclass; ?>"<?php print $attributes; ?>>
    <div class="field field-name-field-project">
      <?php print l($projectname, $project_url, array('external' => TRUE, )); ?>
    </div>
    <div class="thumb">
      <!-- TODO Data needed: URL for thumbnail -->
      <a href="<?php print $url; ?>">
        <img typeof="foaf:Image" src="http://stagemc2.dlib.nyu.edu/imr/sites/default/files/styles/thumbnail__120x80_/public/Puri%20Venerable_37.JPG" width="80" height="60" >
      </a>
    </div>
    <div class="spoke-teaser-meta node-meta">
    <h3 class="spoke-title node-title"<?php print $title_attributes; ?>>
      <a href="<?php print $url; ?>"><?php print $title; ?></a>
    </h3>
     <!-- TODO Data needed: All of the contributors to a spoke, and the links to their profile pages.   -->
   <div class="peoplelist contributors">By <span class="h-card"><a href="http://devmc2.dlib.nyu.edu/mediacommons/user/19">Avi Santo</a></span> </div>
    <time><?php print $created_date; ?></time>
     <!-- TODO Data needed: String for number of comments -->
      <!-- TODO Data needed: Link to comment section of this node -->
      <div class="comment-count">  <a href="http://devmc2.dlib.nyu.edu/imr/2009/12/02/possible-or-probable-imagined-future-book#comments" title="3 comments">3 comments</a></div>
    </div>
  </li>

<?php } else if ($bundle == "hub") {

  
    $nodeObject = $variables["result"]["node"];
    // var_dump($variables["result"]);
    $curator_name = $nodeObject->name;
    $x = $nodeObject->ds_created;
    $cd = date_create($x);
    //var_dump($cd);
    $created_date = date_format($cd,"F d, Y");
    $cd_yyyy_mm_dd = date_format($cd,"YY-MM-DD");

?>

<li class="clearfix node-hub <?php print $classes; ?> node-<?php print $projectclass; ?>"<?php print $attributes; ?>>
  <div class="field-name-field-project"> <?php print l($projectname, $project_url, array('external' => TRUE, )); ?></div>
  <div class="thumb">
    <!-- TODO Data needed: URL for thumbnail -->
    <a href="/imr/2017/05/19/whitewashing-and-asian-american-audiences"><img typeof="foaf:Image" src="http://stagemc2.dlib.nyu.edu/imr/sites/default/files/styles/thumbnail__120x80_/public/Puri%20Venerable_37.JPG" width="120" height="80" ></a></div>
    <div class="node-meta">
    <h3 class="hub-title node-title"<?php print $title_attributes; ?>>
      <a href="<?php print $url; ?>"><span class="content-type"></span> <?php print $title; ?></a></h3>
<!-- TODO Data needed: Dates for Beginning and End of Range -->
    <time datetime="<?php print $cd_yyyy_mm_dd; ?>">$cd_yyyy_mm_dd
      <span class="date-display-range"><span class="date-display-start" property="dc:date" datatype="xsd:dateTime" content="<?php print $cd_yyyy_mm_dd; ?>">
      <?php print $created_date ?></span> to <span class="date-display-end" property="dc:date" datatype="xsd:dateTime" content="<?php print $cd_yyyy_mm_dd; ?>"> <?php print $created_date ?> </span></span></time>

  
<!-- TODO Data needed: All of the curators to a hub, and the links to their profile pages, and their organization, and the link to the org page   -->
    <div class="peoplelist curator"><span class="curatorlabel"></span><div class="h-card"><span class="p-name name fn">Avi Santo</span><span class="p-org">Old Dominion University</span></div>
  </div>
</li>

<?php } else if ($bundle == "comment_node_spoke") { ?>

<li class="clearfix  node-comment <?php print $classes; ?> node-<?php print $projectclass; ?>">
  <div class="field-name-field-project"> <?php print l($projectname, $project_url, array('external' => TRUE, )); ?></div>
<!-- TODO Data needed: referenced-node -->
  <div class="referenced-node">    <span class="views-label">Re: </span><a href="#">Data needed: Referenced Spoke</a></div>

  <h3 class="comment__title comment-title"><a href="<?php print $url; ?>" class="permalink" ><?php print $title; ?></a></h3>

  <!-- TODO Data needed: date comment was created, in this format:  Monday, October 23, 2017 — 7:46 pm -->
  <time datetime="YYYY-MM-DD">Monday, October 23, 2017 — 7:46 pm</time>
  <div class="comment-body"><?php print $snippet; ?></div>

</li>
<?php }  ?>
