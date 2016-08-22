<?php
/**
 * @file
 * mediacommons_homepage_umbrella.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function mediacommons_homepage_umbrella_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Twitter Widget';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'twitter_widget_umbrella';
  $fe_block_boxes->body = '<a class="twitter-timeline" data-height="600" data-theme="dark" href="https://twitter.com/lhenze/lists/mediacommons">&nbsp;</a> <script async src="//platform.twitter.com/widgets.js" charset="utf-8"></script>';

  $export['twitter_widget_umbrella'] = $fe_block_boxes;

  return $export;
}
