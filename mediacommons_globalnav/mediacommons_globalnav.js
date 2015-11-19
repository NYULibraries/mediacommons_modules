;
(function($) {

  console.log("Reading Nav JS file");

  function setUpLoginLink() {
    console.log("mc_global_nav setUpLoginLink ");
    // Global nav - Login - global behavior
    $('.utils a.login-link').unbind('click').click(function(e) {
      console.log("just clicked ");
      if (!e) {
        e = window.event;
      }
      e.preventDefault();
      if ($(this).next('ul').is(":visible")) {
        console.log("am visible: close me");
        $('.utils a.login-link').removeClass("open");
        $('.utils ul').slideUp(300,
          function() {
            $('.utils ul[aria-hidden="false"]').attr('aria-hidden', 'true').removeAttr("style");
          });
      } else {
        console.log("Login box is closed: open me");
        $('.utils a.login-link').addClass("open");
        $('.utils ul').slideDown(300,
          function() {
            $('.utils ul[aria-hidden="true"]').attr('aria-hidden', 'false').removeAttr("style");
            console.log("should be open now utils ul[aria-hidden='false'] ");
          });
      }
    });
  }

  function setUpNavLink() {
    console.log("mc_global_nav setUpNavLink ");
    $('.sites_nav ul').removeAttr("style");
    // Global nav - Login - global behavior
    var w = $(window).width();
    if (w > 800) {
      $('.sites_nav ul[aria-hidden="true"]').attr('aria-hidden', 'false');
      $('.sites_nav a.logolink').unbind("click");
    } else {
      $('.sites_nav ul').attr('aria-hidden', 'true');
      $('.sites_nav a.logolink').unbind('click').click(function(e) {
        console.log("just clicked and narrower than 800px");
        if (!e) {
          e = window.event;
        }
        e.preventDefault();
        if ($(this).next('ul').is(":visible")) {
          console.log("nav am visible: close me");
          $('.sites_nav a.logolink').removeClass("open");
          $('.sites_nav ul').slideUp(300,
            function() {
              $('.sites_nav ul[aria-hidden="false"]').attr('aria-hidden', 'true').removeAttr("style");
            });
        } else {
          console.log("nav box is closed: open me");
          $('.sites_nav a.logolink').addClass("open");
          $('.sites_nav ul').slideDown(300,
            function() {
              $('.sites_nav ul[aria-hidden="true"]').attr('aria-hidden', 'false').removeAttr("style");
              console.log("nav should be open now sites_nav ul[aria-hidden='false'] ");
            });
        }
      });

    }



  }

  function closeTopTwo() {
    console.log("###  closeTopTwo TOP TWO ");
    $('.sites_nav ul[aria-hidden="false"]').attr('aria-hidden', 'true').removeAttr("style");
    $('.utils ul[aria-hidden="false"]').attr('aria-hidden', 'true').removeAttr("style");
  }

  function setUpProjectNavMobile() {
    $("ul.main").attr('aria-hidden', 'true');

    console.log("inside mc_global_nav setUpProjectNavMobile ");

    // SEARCH
    $('header[role=banner] form[role=search] label').unbind('click').click(function() {
      $theSearchButton = $(this);
      // If search is open
      if ($("header[role=banner] form[role=search] fieldset").is(":visible")) {
        //$(this).parent('form').removeClass("open");
        $("header[role=banner] form[role=search] fieldset").slideUp(300, 'easeInQuad',
          function() {
            // closeUpShop();
            $(this).parent('form').removeClass("open");
          });
      } else {
        // if search is closed
        closeTopTwo();
        // if main is already open, first close it 
        if ($('nav.main ul').is(":visible")) {
          $('nav.main ul').slideUp(300, 'easeInQuad', function() {
            $('header[role=banner] form[role=search]').addClass("open");
            $('header[role=banner] form[role=search] fieldset').slideDown(300, 'easeInQuad',
              function() {
                $(this).parent('form').addClass("open");
              });
          });
        } else {
          // if main is closed
          $('header[role=banner] form[role=search]').addClass("open");
          $('header[role=banner] form[role=search] fieldset').slideDown(300, 'easeOutQuad',
            function() {
             //console.log("search fieldset should be nicely open");
              
            });
        }

        // });
      }
    });
    ////
    // Main project nav
    if ($(".nav.main>ul").length) {
      console.log("**   has a list");
      $("header[role=banner] button").unbind('click').click(function() {

        var $theMenuButton = this;
        if ($("nav.main ul").is(":visible")) {
          console.log("case now 1, main ul is visible");
          $('nav.main ul').slideUp(300, 'easeInQuad', function() {
            $("header[role=banner] button").removeClass("open");
          });
        } else {
          // NOT VISIBLE, So open it
          closeTopTwo();
          if ($("header[role=banner] form[role=search] fieldset").is(":visible")) {
            $('header[role=banner] form[role=search] fieldset').slideUp(300, 'easeInQuad', function() {
              $('nav.main ul').slideDown(300, 'easeInQuad', function() {
                $('header[role=banner] form[role=search]').removeClass("open");
                $("header[role=banner] button").addClass("open");
                $('nav.main ul').attr('aria-hidden', 'false');
              });
            });
          } else {
            console.log("case now slide down");
            $('nav.main ul').slideDown(300, 'easeInQuad');
          }

        }
      });

    } else {
      console.log("**   has no list");
      $("header[role=banner] button").remove();
    }
  }
  $(window).resize(function() {
    // Collapsing the height doesn't interfere with the jquery, but display:none does.
    $('.sites_nav ul').attr('style', 'height:0px; overflow:hidden');
  });
  $(window).resize(_.debounce(function() {
    // executed when the DOM is ready
    console.log("resized (debounced) from mc_global nav");
    setUpNavLink();
    setUpProjectNavMobile();
  }, 200));
  console.log("Soon rendering up global nav ");
  setUpLoginLink();
  setUpNavLink();
  setUpProjectNavMobile();

})(jQuery);