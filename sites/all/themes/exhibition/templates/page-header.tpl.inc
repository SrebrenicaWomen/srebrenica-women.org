<div class="page-header">
  <div class="language-switcher">
    <a href="/"   xhref="http://www.srebrenica-women.org"  target="_parent"><?php print t('EN'); ?></a>
    <a href="/de" xhref="http://www.srebrenica-frauen.org" target="_parent"><?php print t('DE'); ?></a>
    <a href="/bs" xhref="http://www.srebrenica-zene.org"   target="_parent"><?php print t('BS'); ?></a>
  </div>
  <div class="intro blurb">
    <a href="/"><h1><?php print t(variable_get('site_name', '')); ?></h1></a>
    <p><?php print t("We are 12 women from Srebrenica using photography to talk about our personal life in Bosnia nowadays:"); ?>
    <h2><i>Our View</i>, our <a href="http://www.instagram.com/everydaysrebrenica">#EVERYDAYSREBRENICA</a></h2>
  </div>
  <div class="portrait-navigation">
    <?php $thumbs = exhibition_content_get_portrait_navigation(); print render($thumbs); ?>
  </div>
</div>