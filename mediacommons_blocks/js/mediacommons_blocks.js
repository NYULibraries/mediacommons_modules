;(function ($) {
  "use strict";
  function getParameterByName (name, url) {
    if (!url) return null;
    name = name.replace(/[\[\]]/g, "\\$&");
    var regex = new RegExp("[?&]" + name + "(=([^&#]*)|&|#|$)"), results = regex.exec(url);
    if (!results) return null;
    if (!results[2]) return '';
    return decodeURIComponent(results[2].replace(/\+/g, " "));
  }
  Drupal.behaviors.mediacommons_blocks = {
    attach : function(context, settings) {
      var $pager = $('.mc-mc .pager', context);
      if ($pager.find('a').length) {
        // https://infinite-scroll.com/
        $('.mediacommons_solr-results').infiniteScroll({
          path: '.pager-next a',
          append: '.search-result',
          history: false,
        });
      }
    }
  }
})(jQuery);
