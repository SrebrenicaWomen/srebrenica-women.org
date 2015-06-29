<div class="page-header">
  <div class="language-switcher">
    <?php
      $lang_list = array();
      $languages = language_list('enabled');
      $languages = $languages[TRUE];
      foreach($languages as $lang_key => $lang_object) {
        $lang_name = strtoupper($lang_key);
        $lang_link = l($lang_name, current_path(), array('language' => $lang_object));
        $lang_list[] = $lang_link;
      }
      print theme('item_list', array('items' => $lang_list))
    ?>
  </div>
  <div class="intro blurb">
    <a href="/"><h1><?php print t(variable_get('site_name', '')); ?></h1></a>
    <p><?php print t("We are 12 women from Srebrenica using photography to talk about our personal life in Bosnia nowadays:"); ?>
    <h2><i>Our View</i>, our <a href="http://www.instagram.com/everydaysrebrenica">#EVERYDAYSREBRENICA</a></h2>
  </div>
  <div class="portrait-navigation">
    <?php if (function_exists('exhibition_content_get_portrait_navigation')) { $thumbs = exhibition_content_get_portrait_navigation(); print render($thumbs); } ?>
  </div>
</div>