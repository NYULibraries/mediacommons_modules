<?php // comment_node_spoke ?>
<li class="clearfix  node-comment <?php print $classes; ?> node-<?php print $projectclass; ?>">
  <div class="field-name-field-project"> <?php print l($projectname, $project_url, array('external' => TRUE, )); ?></div>
  <!-- TODO Data needed: referenced-node -->
  <div class="referenced-node">    <span class="views-label">Re: </span><a href="#">Data needed: Referenced Spoke</a></div>
  <h3 class="comment__title comment-title"><a href="<?php print $url; ?>" class="permalink" ><?php print $title; ?></a></h3>
  <!-- TODO Data needed: date comment was created, in this format:  Monday, October 23, 2017 — 7:46 pm -->
  <time datetime="YYYY-MM-DD">Monday, October 23, 2017 — 7:46 pm</time>
  <div class="comment-body"><?php print $snippet; ?></div>
</li>
