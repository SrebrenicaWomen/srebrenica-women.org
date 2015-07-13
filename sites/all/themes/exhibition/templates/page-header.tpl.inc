<div class="header-toggle">
  <a href="#" onClick="jQuery('header').toggleClass('nav-down').toggleClass('nav-up'); return false;"><i class="fa fa-bars"></i></a>
</div>
<header class="nav-down">
  <div class="header-inner">
    <nav class="lang">
      <a href="https://instagram.com/everydaysrebrenica"><i class="fa fa-lg fa-instagram"></i></a>
      <a href="https://www.facebook.com/everydaysrebrenica"><i class="fa fa-lg fa-facebook-square"></i></a>
      <?php
      $lang_list = array();
      $languages = language_list('enabled');
      $languages = $languages[TRUE];
      foreach($languages as $lang_key => $lang_object) {
        $lang_name = strtoupper($lang_key);
        $lang_status = ($GLOBALS['language']->language == $lang_key) ? 'active' : 'inactive';
        $lang_link = l($lang_name, current_path(), array('language' => $lang_object, 'attributes' => array('class' => array($lang_status))));
        $lang_list[] = $lang_link;
      }
      print implode('', $lang_list); // theme('item_list', array('items' => $lang_list))
      ?>
    </nav>
    <nav class="front">
      <?php print l('<i class="fa fa-lg fa-home"></i><span>' . t('Our View', array(), array('context' => 'menu')) . '</span>', '<front>', array('html' => TRUE, 'attributes' => array('class' => array('front')))); ?>
    </nav>
    <nav class="main">
      <?php print l(t('About',    array(), array('context' => 'menu')), 'node/295'); ?>
      <?php print l(t('Press',    array(), array('context' => 'menu')), 'node/303'); ?>
      <?php print l(t('Friends',  array(), array('context' => 'menu')), 'node/304'); ?>
      <?php print l(t('Blog',     array(), array('context' => 'menu')), 'node/375'); ?>
    </nav>
    <nav class="portraits">
      <?php if (function_exists('exhibition_content_get_portrait_navigation')) { $thumbs = exhibition_content_get_portrait_navigation(); print render($thumbs); } ?>
    </div>
  </div>
</header>
<div class="header-spacer"></div>