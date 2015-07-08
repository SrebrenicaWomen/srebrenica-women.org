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
            $('.swipebox').swipebox({hideBarsDelay : 0});
            // Add swipbox triggering via tile image captions.
            $('.tile .swipebox').parent().children('figcaption').addClass('clickable').click(function() {
                $(this).parent().children('a').click();
            });
            // User agent match for android ensures the use of swipebox button navigation.
            if(navigator.userAgent.match(/Android/i)){window.scrollTo(0,1);}

        }
    }

})(jQuery);
