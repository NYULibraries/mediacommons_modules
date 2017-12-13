;(function ($) {
  "use strict";
  Drupal.behaviors.mediacommons_blocks = {
    attach : function(context, settings) {
      var $pager = $('.mc-mc .pager', context);
      var $links = $pager.find('a');
      if ($links.length) {
    	$links.each(function() {
    	  var $href = $(this).attr('href');
    	  var bjax = $href + '&bjax=1&pjax=1';
    	  $(this).attr('href', bjax);
    	});
        // https://infinite-scroll.com
    	  // https://infinite-scroll.com/events.html
    	var $container = $('.mediacommons_solr-results').infiniteScroll({
          path: '.pager-next a',
          loadOnScroll: true,
          history: false,          
          append: '.mediacommons_solr-results',
          // status: '.scroller-status',
          hideNav: '.mediacommons_solr-results .pager'
        });
    	$container.on('load.infiniteScroll', function(event, response, path) {
          console.log(path);
        });
      }
    }
  }
})(jQuery);
