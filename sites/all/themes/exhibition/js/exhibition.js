/*
jQuery(document).ready(function($) {
    // Initialize packery layout.
    $('.tiles').packery({
        itemSelector: '.tile',
        gutter: 0
    });

    // Add lazy loading for tile images
    $("img").unveil(100, function() {
        $(this).load(function() {
            $(this).removeClass('lazy-waiting');
            $(this).addClass('lazy-loaded');
        });
    });

    // Add swipeboxing of image-links
    $('.swipebox').swipebox();

    // Fix for fluid responsive lazy loaded images.
//    $(window).resize(function() {
//        $('.tile.viewmode-feature').each(function() {
//            var parentwidth = $(this).parent().css('width');
//            console.log(parentwidth);
//            $(this).css('width', parentwidth + 'px').css('height', Math.round(parentwidth * 66.61) + 'px');
//            $(this).children('figure img').css('width', parentwidth + 'px').css('height', Math.round(parentwidth * 66.61) + 'px');
//        });
//    });
});

*/

(function ($) {

    Drupal.behaviors.dsbox = {
        attach: function (context, settings) {



            // Auto-hide header nav bar
            // -------------------------------


            // Source: https://medium.com/@mariusc23/hide-header-on-scroll-down-show-on-scroll-up-67bbaae9a78c
            // Hide Header on on scroll down, auto-show on scroll-up
            Drupal.autoHideHeader = {};
            Drupal.autoHideHeader.didScroll;
            Drupal.autoHideHeader.lastScrollTop = 0;
            Drupal.autoHideHeader.delta = 25;
//            var navbarHeight = $('header').outerHeight();

//            $('.header-spacer').css('height', $('header').outerHeight());

            $(window).scroll(function(event){
                Drupal.autoHideHeader.didScroll = true;
            });

            $(window).resize(function(event){
                hasScrolled();
            });

            setInterval(function() {
                if (Drupal.autoHideHeader.didScroll) {
                    hasScrolled();
                    Drupal.autoHideHeader.didScroll = false;
                }
            }, 1000);

            function hasScrolled() {
                var navbarHeight = $('header').outerHeight();
                $('.header-spacer').css('height', navbarHeight);

                var st = $(this).scrollTop();

                // Make sure they scroll more than Drupal.autoHideHeader.delta
                if(Math.abs(Drupal.autoHideHeader.lastScrollTop - st) <= Drupal.autoHideHeader.delta)
                    return;

                // If they scrolled down and are past the navbar, add class .nav-up.
                // This is necessary so you never see what is "behind" the navbar.
                if (st > Drupal.autoHideHeader.lastScrollTop && st > navbarHeight){
                    // Scroll Down
                    $('header').removeClass('nav-down').addClass('nav-up');
                } else {
                    // Scroll Up
                    if(st + $(window).height() < $(document).height()) {
                        $('header').removeClass('nav-up').addClass('nav-down');
                    }
                }

                Drupal.autoHideHeader.lastScrollTop = st;
            }



            // Initialize packery layout.
            // ---------------------------------

            $('.tiles').packery({
                itemSelector: '.tile',
                gutter: 0
            });



            // Add lazy loading for tile images
            // ---------------------------------

            $("img").unveil(100, function() {
                $(this).load(function() {
                    $(this).removeClass('lazy-waiting');
                    $(this).addClass('lazy-loaded');
                });
            });



            // Add swipeboxing of image-links
            // ---------------------------------

            $('.swipebox').swipebox({hideBarsDelay : 0});
            // Add swipbox triggering via tile image captions.
            $('.tile .swipebox').parent().children('figcaption').addClass('clickable').click(function() {
                $(this).parent().children('a').click();
            });
            // User agent match for android ensures the use of swipebox button navigation.
            if(navigator.userAgent.match(/Android/i)){window.scrollTo(0,1);}



            // Adjust menu bar placer
            // ---------------------------------

            hasScrolled();


            // Activate parallaxe scrolling of some elements via stellar.js
            //$.stellar({ horizontalScrolling: false, verticalScrolling: true});


        }
    }

})(jQuery);
