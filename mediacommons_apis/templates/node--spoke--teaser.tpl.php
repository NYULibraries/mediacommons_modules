<?php

/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<h1><?php __FILE__ ?></h1>
<article class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php if ($page && $title): ?>
    <header>
      <?php print render($title_prefix); ?>
        <?php if (!$page): ?>
          <h2<?php print $title_attributes; ?>>
            <?php if ($label_link): ?>
              <a href="<?php print $node_url; ?>"><?php print $title; ?></a>
            <?php else: ?>
              <?php print $title; ?>
            <?php endif; ?>
          </h2>
        <?php endif; ?>
     <?php print render($title_suffix); ?>
      <?php if ($display_submitted): ?>
        <p class="submitted">
          <?php print $user_picture; ?>
          <?php print $submitted; ?>
        </p>
      <?php endif; ?>
      <?php if ($unpublished): ?>
        <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
      <?php endif; ?>
    </header>
  <?php endif; ?>
  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    print render($content);
  ?>
</article>
