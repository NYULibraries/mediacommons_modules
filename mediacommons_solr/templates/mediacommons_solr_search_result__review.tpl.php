<li class="clearfix  node-comment <?php print $classes; ?> node-<?php print $projectclass; ?>">
  <div class="field-name-field-project"> 
    <?php print l($projectname, $project_url, array('external' => TRUE, )); ?>
  </div>
  <div class="referenced-node">    
    <span class="views-label">Re: </span>
    <?php print l($referencedspoke->label, $referencedspoke->url, array('external' => FALSE)); ?>
  </div>
  <h3 class="comment__title comment-title">
    <?php print l($title, $referencedspoke->url, array('external' => FALSE, 'attributes' => array('class' => 'permalink'))); ?>
  </h3>
  <time><?php print $created_date ?></time>
  <div class="comment-body"><?php print $snippet; ?></div>
</li>


