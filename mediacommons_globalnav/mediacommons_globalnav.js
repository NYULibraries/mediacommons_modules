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
            $('.utils ul[aria-hidden="false"]').attr('aria-hidden', 'true');
          });
      } else {
        console.log("Login box is closed: open me");
       // closeTopTwo();
       // closebottomTwo();
        $('.utils a.login-link').addClass("open");
        $('.utils ul').slideDown(300,
          function() {
            $('.utils ul[aria-hidden="true"]').attr('aria-hidden', 'false').removeAttr("style");
            console.log("should be open now utils ul[aria-hidden='false'] ");
          });
      }
    });
  }


  jQuery(document).ready(function($) {
    // executed once every element of the page is loaded, including fonts
    console.log("Soon rendering up global nav ");
    //respond();
    setUpLoginLink();
  });

})(jQuery);