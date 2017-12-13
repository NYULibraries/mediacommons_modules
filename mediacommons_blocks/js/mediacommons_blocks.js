;(function ($) {
  "use strict";
  Drupal.behaviors.mediacommons_blocks = {
    attach : function(context, settings) {
      var $pager = $('.mc-mc .pager', context);
      if ($pager.find('a').length) {	
        // https://infinite-scroll.com/
    	var $container = $('.mediacommons_solr-results').infiniteScroll({
          path: '.pager-next a',
          loadOnScroll: true,
          history: false,          
          append: '.mediacommons_solr-results',
          // status: '.scroller-status',
          hideNav: '.mediacommons_solr-results .pager'
        });
        //$container.on( 'load.infiniteScroll', function(event, response) {
          //console.log(response);
        //});
      }
    }
  }
})(jQuery);
