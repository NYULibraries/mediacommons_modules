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
  $fe_block_boxes->info = 'Fieldguide Table of Contents';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'fieldguide_toc_html';
  $fe_block_boxes->body = '<article class="toc" role="directory">
  <div class="field field-name-field-project field-type-list-text">
  Field Guide Survey Question
  </div>
  <div about="/fieldguide/content/what-opportunities-are-available-influence-way-algorithms-are-programmed-written-executed" typeof="sioc:Item foaf:Document" class="ds-1col node node-hub view-mode-full clearfix">
    <header class="hubhead">
      <div class="field field-name-title field-type-ds field-label-hidden">
        <div class="field-items">
          <div class="field-item even" property="dc:title">
            <h1 class="hub-title">What opportunities are available to influence the way algorithms are programmed, written, executed, and trusted?</h1></div>
        </div>
      </div>
    
    </header>
    <div class="field spokes">

           <div about="/fieldguide/question/what-opportunities-are-available-influence-way-algorithms-are-programmed-written-executed-0" typeof="sioc:Item foaf:Document" class="ds-1col node node-spoke node-teaser view-mode-teaser clearfix">
        <h2 class="spoke-title"><a href="/fieldguide/question/what-opportunities-are-available-influence-way-algorithms-are-programmed-written-executed-0">Curator Introduction: Organisms in a World of Algorithms</a></h2>
      
        <div class="peoplelist contributors">
       
          <ul>
            <li>By <a href="/fieldguide/users/daniel-hocutt">Daniel Hocutt</a> | 11/16/2015</li>
          </ul>
        </div>
        <div class="field field-name-comment-count-spokes field-type-ds field-label-hidden">
          <div class="field-items">
            <div class="field-item even">
              <div class="view view-comment-count-for-spoke view-id-comment_count_for_spoke view-display-id-panel_pane_1 view-dom-id-ed77b91ed4e3aa6651f6acada994c6d9">
                <div class="view-content">
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>



      <div about="/fieldguide/question/what-opportunities-are-available-influence-way-algorithms-are-programmed-written-executed-9" typeof="sioc:Item foaf:Document" class="ds-1col node node-spoke node-teaser view-mode-teaser clearfix">
        <h2 class="spoke-title"><a href="/fieldguide/question/what-opportunities-are-available-influence-way-algorithms-are-programmed-written-executed-9">Experiments in Ethics: The Ethical Programs of Self-Driving Cars</a></h2>
       
        <div class="peoplelist contributors">
          <ul>
            <li>By <a href="/fieldguide/users/jim-brown">Jim Brown</a> on Sunday, November 29, 2015</li>
          </ul>
        </div>
        <div class="field field-name-comment-count-spokes field-type-ds field-label-hidden">
          <div class="field-items">
            <div class="field-item even">
              <div class="view view-comment-count-for-spoke view-id-comment_count_for_spoke view-display-id-panel_pane_1 view-dom-id-15f7b53a7673904d388f56d90edfb09e">
                <div class="view-content">
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>

  

      <div about="/fieldguide/question/what-opportunities-are-available-influence-way-algorithms-are-programmed-written-executed-7" typeof="sioc:Item foaf:Document" class="ds-1col node node-spoke node-teaser view-mode-teaser clearfix">
        <h2 class="spoke-title"><a href="/fieldguide/question/what-opportunities-are-available-influence-way-algorithms-are-programmed-written-executed-7">Crowdsourcing Out the Sophistic Algorithms: An Ancient View</a></h2>
     
        <div class="peoplelist contributors">
       
          <ul>
            <li><a href="/fieldguide/users/walt-stevenson">Walt Stevenson</a></li>
          </ul>
        </div>
        <div class="field field-name-comment-count-spokes field-type-ds field-label-hidden">
          <div class="field-items">
            <div class="field-item even">
              <div class="view view-comment-count-for-spoke view-id-comment_count_for_spoke view-display-id-panel_pane_1 view-dom-id-883d8b087a4321c4834fe792c0989a69">
                <div class="view-content">
                  <div class="views-field views-field-comment-count"> <span class="field-content"><a href="/fieldguide/view#comment-1">1 comment</a></span> </div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
      <div about="/fieldguide/question/what-opportunities-are-available-influence-way-algorithms-are-programmed-written-executed-8" typeof="sioc:Item foaf:Document" class="ds-1col node node-spoke node-teaser view-mode-teaser clearfix">
        <h2 class="spoke-title"><a href="/fieldguide/question/what-opportunities-are-available-influence-way-algorithms-are-programmed-written-executed-8">How are we tracked once we press play? Algorithmic data mining in casual video games</a></h2>
      
        <div class="peoplelist contributors">
         
          <ul>
            <li><a href="/fieldguide/users/stephanie-vie">Stephanie Vie</a></li>
          </ul>
        </div>
        <div class="field field-name-comment-count-spokes field-type-ds field-label-hidden">
          <div class="field-items">
            <div class="field-item even">
              <div class="view view-comment-count-for-spoke view-id-comment_count_for_spoke view-display-id-panel_pane_1 view-dom-id-360897ed1da6ddf33e3fce3161e667f3">
                <div class="view-content">
                  <div class="views-field views-field-comment-count"> <span class="field-content"><a href="/fieldguide/view#comment-1">1 comment</a></span> </div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
      <div about="/fieldguide/question/what-opportunities-are-available-influence-way-algorithms-are-programmed-written-executed-6" typeof="sioc:Item foaf:Document" class="ds-1col node node-spoke node-teaser view-mode-teaser clearfix">
        <h2 class="spoke-title"><a href="/fieldguide/question/what-opportunities-are-available-influence-way-algorithms-are-programmed-written-executed-6">algorithms at the seam: machines reading humans +/-</a></h2>
       
        <div class="peoplelist contributors">
         
          <ul>
            <li><a href="/fieldguide/users/carl-whithaus">Carl Whithaus</a></li>
          </ul>
        </div>
        <div class="field field-name-comment-count-spokes field-type-ds field-label-hidden">
          <div class="field-items">
            <div class="field-item even">
              <div class="view view-comment-count-for-spoke view-id-comment_count_for_spoke view-display-id-panel_pane_1 view-dom-id-41acde42d902eca219d906d31c0767d6">
                <div class="view-content">
                  <div class="views-field views-field-comment-count"> <span class="field-content"><a href="/fieldguide/view#comment-1">1 comment</a></span> </div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
      <div about="/fieldguide/question/what-opportunities-are-available-influence-way-algorithms-are-programmed-written-executed-5" typeof="sioc:Item foaf:Document" class="ds-1col node node-spoke node-teaser view-mode-teaser clearfix">
        <h2 class="spoke-title"><a href="/fieldguide/question/what-opportunities-are-available-influence-way-algorithms-are-programmed-written-executed-5">How will near future writing technologies influence teaching and learning in writing?</a></h2>
      
        <div class="peoplelist contributors">
      
          <ul>
            <li><a href="/fieldguide/users/bill-hart-davidson">Bill Hart-Davidson</a></li>
          </ul>
        </div>
        <div class="field field-name-comment-count-spokes field-type-ds field-label-hidden">
          <div class="field-items">
            <div class="field-item even">
              <div class="view view-comment-count-for-spoke view-id-comment_count_for_spoke view-display-id-panel_pane_1 view-dom-id-bed7934c17d3562734456b15bd5a5d98">
                <div class="view-content">
                  <div class="views-field views-field-comment-count"> <span class="field-content"><a href="/fieldguide/view#comment-1">1 comment</a></span> </div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
      <div about="/fieldguide/question/what-opportunities-are-available-influence-way-algorithms-are-programmed-written-executed-4" typeof="sioc:Item foaf:Document" class="ds-1col node node-spoke node-teaser view-mode-teaser clearfix">
        <h2 class="spoke-title"><a href="/fieldguide/question/what-opportunities-are-available-influence-way-algorithms-are-programmed-written-executed-4">Toward Ambient Algorithms</a></h2>

        <div class="peoplelist contributors">
       
          <ul>
            <li><a href="/fieldguide/users/sean-m-conrey">Sean M. Conrey</a></li>
          </ul>
        </div>
        <div class="field field-name-comment-count-spokes field-type-ds field-label-hidden">
          <div class="field-items">
            <div class="field-item even">
              <div class="view view-comment-count-for-spoke view-id-comment_count_for_spoke view-display-id-panel_pane_1 view-dom-id-8052658f88b9c82d696e97faade737f9">
                <div class="view-content">
                  <div class="views-field views-field-comment-count"> <span class="field-content"><a href="/fieldguide/view#comment-1">1 comment</a></span> </div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
      <div about="/fieldguide/question/what-opportunities-are-available-influence-way-algorithms-are-programmed-written-executed-3" typeof="sioc:Item foaf:Document" class="ds-1col node node-spoke node-teaser view-mode-teaser clearfix">
        <h2 class="spoke-title"><a href="/fieldguide/question/what-opportunities-are-available-influence-way-algorithms-are-programmed-written-executed-3">Algorithmic Discrimination in Online Spaces</a></h2>
     
        <div class="peoplelist contributors">
          <div class="field-label">By</div>
          <ul>
            <li><a href="/fieldguide/users/estee-beck">Estee Beck</a></li>
          </ul>
        </div>
        <div class="field field-name-comment-count-spokes field-type-ds field-label-hidden">
          <div class="field-items">
            <div class="field-item even">
              <div class="view view-comment-count-for-spoke view-id-comment_count_for_spoke view-display-id-panel_pane_1 view-dom-id-929bd6dd0a73b33dc430685e5dfe2349">
                <div class="view-content">
                  <div class="views-field views-field-comment-count"> <span class="field-content"><a href="/fieldguide/view#comment-1">2 comments</a></span> </div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
      <div about="/fieldguide/question/what-opportunities-are-available-influence-way-algorithms-are-programmed-written-executed-2" typeof="sioc:Item foaf:Document" class="ds-1col node node-spoke node-teaser view-mode-teaser clearfix">
        <h2 class="spoke-title"><a href="/fieldguide/question/what-opportunities-are-available-influence-way-algorithms-are-programmed-written-executed-2">The Essential Context: Theorizing the Coming Out Narrative as a Set of (Big) Data</a></h2>
       
        <div class="peoplelist contributors">

          <ul>
            <li><a href="/fieldguide/users/marc-ouellette-0">Marc Ouellette</a></li>
          </ul>
        </div>
        <div class="field field-name-comment-count-spokes field-type-ds field-label-hidden">
          <div class="field-items">
            <div class="field-item even">
              <div class="view view-comment-count-for-spoke view-id-comment_count_for_spoke view-display-id-panel_pane_1 view-dom-id-37df3779cbc05b57d1f8f7b8ee294e80">
                <div class="view-content">
                  <div class="views-field views-field-comment-count"> <span class="field-content"><a href="/fieldguide/view#comment-1">1 comment</a></span> </div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
      <div about="/fieldguide/question/what-opportunities-are-available-influence-way-algorithms-are-programmed-written-executed-1" typeof="sioc:Item foaf:Document" class="ds-1col node node-spoke node-teaser view-mode-teaser clearfix">
        <h2 class="spoke-title"><a href="/fieldguide/question/what-opportunities-are-available-influence-way-algorithms-are-programmed-written-executed-1">Algorithms and Rhetorical Agency</a></h2>
    
        <div class="peoplelist contributors">
          <div class="field-label">By</div>
          <ul>
            <li><a href="/fieldguide/users/chris-ingraham">Chris Ingraham</a></li>
          </ul>
        </div>
        <div class="field field-name-comment-count-spokes field-type-ds field-label-hidden">
          <div class="field-items">
            <div class="field-item even">
              <div class="view view-comment-count-for-spoke view-id-comment_count_for_spoke view-display-id-panel_pane_1 view-dom-id-8c810c589f5ba2bbf73ca26fa67f5374">
                <div class="view-content">
                  <div class="views-field views-field-comment-count"> <span class="field-content"><a href="/fieldguide/view#comment-1">6 comments</a></span> </div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
     
    </div>
  </div>
</article>';

  $export['fieldguide_toc_html'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Twitter Widget';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'twitter_widget_umbrella';
  $fe_block_boxes->body = '<a class="twitter-timeline" href="https://twitter.com/lhenze/lists/mediacommons" data-widget-id="671717886218657792">Tweets from https://twitter.com/lhenze/lists/mediacommons</a>
<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],p=/^http:/.test(d.location)?\'http\':\'https\';if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src=p+"://platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script>';

  $export['twitter_widget_umbrella'] = $fe_block_boxes;

  return $export;
}
