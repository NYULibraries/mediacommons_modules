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
    // Global nav - Login - global behavior
    var w = $(window).width();
    if (w > 800) {
      $('.sites_nav ul[aria-hidden="true"]').attr('aria-hidden', 'false');
    } else {
      $('.sites_nav ul').attr('aria-hidden', 'true');
    }
    $('.sites_nav a.logolink').unbind('click').click(function(e) {
      console.log("just clicked ");
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
  $(window).resize(_.debounce(function() {
    // executed when the DOM is ready
    console.log("resized (debounced) from mc_global nav");
    setUpNavLink();
  }, 200));

  jQuery(document).ready(function($) {
    // executed once every element of the page is loaded, including fonts
    console.log("Soon rendering up global nav ");
    setUpLoginLink();
    setUpNavLink();
  });

})(jQuery);