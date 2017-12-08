<li class="<?php print $classes ?>">
  <div class="field-name-field-project"><?php print $project_link ?></div>
  <div class="referenced-node">
    <span class="views-label">Re: </span><a href="#">Data needed: Referenced Spoke</a>
  </div>
  <h3 class="comment__title comment-title">
    <a href="<?php print $url ?>" class="permalink" ><?php print $title; ?></a>
  </h3>
  <!-- TODO Data needed: date comment was created, in this format:  Monday, October 23, 2017 — 7:46 pm -->
  <time datetime="YYYY-MM-DD"><?php print $created_date ?></time>
  <div class="comment-body">
    <?php print $snippet; ?>
  </div>
</li>
