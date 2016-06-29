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
  $fe_block_boxes->body = '<a class="twitter-timeline" href="https://twitter.com/lhenze/lists/mediacommons" data-widget-id="671717886218657792">Tweets from https://twitter.com/lhenze/lists/mediacommons</a>
<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],p=/^http:/.test(d.location)?\'http\':\'https\';if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src=p+"://platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script>';

  $export['twitter_widget_umbrella'] = $fe_block_boxes;

  return $export;
}
