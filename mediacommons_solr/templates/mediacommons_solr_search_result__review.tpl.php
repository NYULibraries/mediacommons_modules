<li class="<?php print $classes ?>"<?php print $attributes ?>>
  <div class="field field-name-field-project">
    <?php print $project_link ?>
  </div>
  <div class="thumb">
    <?php if (!empty($ri)) : ?>
    <a role="presentation" tabindex="-1" href="<?php print $url ?>">
      <!-- $ri holds URL for all available styles defined by Drupal's image styles -->
      <img typeof="foaf:Image" src="<?php print $ri->thumbnail__120x80_ ?>" width="120" height="80" alt="">
    </a>
    <?php endif; ?>
  </div>
  <div class="spoke-teaser-meta node-meta">
    <h3 class="spoke-title node-title"<?php print $title_attributes ?>>
      <a href="<?php print $url ?>"><?php print $title ?></a>
    </h3>
    <div class="peoplelist contributors">
      <span>By</span> <?php print $peoplelist ?>
    </div>
    <time><?php print $created_date ?></time>
    <?php if ($comment_count): ?>
    <div class="comment-count">
      <a href="<?php print $url?>#comments" title="<?php print format_plural($comment_count, '1 comment', '@count comments') ?>">
        <?php print format_plural($comment_count, '1 comment', '@count comments') ?>
      </a>
    </div>
    <?php endif ?>
    <div class="peoplelist reviewers">
      <span>Review by</span> <?php print $reviewby ?>
    </div>    
    

  </div>
</li>
