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
      print implode('', $lang_list); // theme('item_list', array('items' => $lang_list))
    ?>
  </div>
  <?php if ('overview' != current_path()) { ?>
  <div class="page-header-content intro blurb">
    <h1><?php print l(t(variable_get('site_name', 'Srebrenica Women')), '<front>'); ?></h1>
  </div>
  <?php } ?>
  <div class="portrait-navigation">
    <?php if (function_exists('exhibition_content_get_portrait_navigation')) { $thumbs = exhibition_content_get_portrait_navigation(); print render($thumbs); } ?>
  </div>
</div>