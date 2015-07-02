<div class="tile tile-style-<?php print $tile_style; ?> <?php print $tile_class; ?>">
  <?php if (isset($tile_anchor)) { ?><a name="tile-<?php print $tile_anchor; ?>"></a><?php } ?>
  <?php // print "id:$contentid style:$tile_style"; ?>
  <?php if (!empty($tile_url)) { ?><a href="<?php print $tile_url; ?>"><?php } ?>
    <figure class="field-visual">
      <?php print render($tile_visual); ?>
      <?php if (!empty($tile_title) || !empty($tile_caption)) { ?>
        <figcaption>
          <div class="tile-info">
            <?php if (!empty($tile_title))   { ?><div class="field-title"><?php print render($tile_title); ?></div><?php } ?>
            <?php if (!empty($tile_caption)) { ?><div class="field-caption"><?php print render($tile_caption); ?></div><?php } ?>
          </div>
        </figcaption>
    <?php } ?>
    </figure>
  <?php if (!empty($tile_url)) { ?></a><?php } ?>
</div>
