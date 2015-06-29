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
