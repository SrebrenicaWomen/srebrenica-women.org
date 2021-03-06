<?php


// include_once('seven_takeover/seven_template.php');


/**
 * Implementation of hook_theme().
 */
function exhibition_theme($existing, $type, $theme, $path) {
  return array(
    'tile' => array(
      'template' => 'tile',
      'path' => $path . '/templates',
      'variables' => array(
        'tile_style'   => '',
        'tile_class'   => '',
        'tile_visual'  => '',
        'tile_title'   => '',
        'tile_caption' => '',
        'tile_anchor'  => '',
        'tile_url'     => '',
      ),
    ),
  );
}


/**
 * Implementation of hook_preprocess_node().
 */
function exhibition_preprocess_node(&$vars, $hook) {
  //static $tile_style_cycle = 0;
  $node = $vars['node'];
  $type = $vars['type'];
  $view_mode = $vars['view_mode'];
  $vars['tile_anchor'] = $node->nid;
  $vars['tile_attributes'] = '';

  // Make view mode specific template suggestions.
  $vars['theme_hook_suggestions'][] = 'node__viewmode__' . $view_mode;
  $vars['theme_hook_suggestions'][] = 'node__' . $type . '__' . $view_mode;
  //$vars['theme_hook_suggestions'][] = 'tile';

  // Determine additional extra classes.
  $extra_classes = '';
  $extra_classes = 'viewmode-' . drupal_html_class($view_mode);
  if (isset($node->style_override)) {
    $extra_classes = drupal_html_class($node->style_override);
  }
  if (isset($node->style_additional)) {
    $extra_classes .= ' ' . drupal_html_class($node->style_additional);
  }
  $vars['tile_class'] = $extra_classes;

  if ('page' == $type) {
    if ('full' == $view_mode) {
      unset($vars['content']['field_headline']);
    }
  }

  // Handle tiles for detail node type.
  if ('detail' == $type) {
    $vars['tile_title'] = isset($vars['content']['field_headline']) ? $vars['content']['field_headline'][0]['#markup'] : '';
    $vars['tile_caption'] = isset($vars['content']['field_text']) ? $vars['content']['field_text'][0]['#markup'] : '';
    $vars['tile_style'] = ('visual' == $type) ? 2 : 0;
  }

  // Handle tiles for visual node type.
  if (in_array($type, array('visual'/*, 'detail'*/))) {
    $vars['title'] = NULL;

    // Replace title with parent content's title.
    $parent = FALSE;
    if (isset($node->field_parent_content[LANGUAGE_NONE])) {
      $parent = node_load($node->field_parent_content[LANGUAGE_NONE][0]['target_id']);
      $vars['title'] = $parent->title;
    }

    $epoch_name = isset($vars['content']['field_epoch']) ? strip_tags($vars['content']['field_epoch'][0]['#markup']) : '';
    $image_caption = isset($vars['content']['field_visual_caption']) ? strip_tags($vars['content']['field_visual_caption'][0]['#markup']) : '';
    $overlay_caption = '';
    //if (!empty($image_caption))
    {
      if ($parent) { $overlay_caption .= $parent->title . ' '; }
      if ($epoch_name) { $overlay_caption .= '(' . $epoch_name . ') '; }
      if (!empty($image_caption) && !empty($overlay_caption)) { $overlay_caption .= ' - '; }
      $overlay_caption .= $image_caption;
    }

    $vars['tile_caption'] = $image_caption;
    $vars['tile_visual']  = $vars['content']['field_image_file'];
    $vars['tile_title']   = $vars['title'];
    if ('teaser' == $view_mode) {
      if ('visual' == $type) {
        // Link tile to the visual's parent node.
        if (isset($node->field_parent_content[LANGUAGE_NONE])) {
          $vars['tile_url'] = url('node/' . $node->field_parent_content[LANGUAGE_NONE][0]['target_id'], array('fragment' => 'tile-' . $node->nid));
        }
        unset($vars['tile_caption']);
        if ($type != 'detail') {
          unset($vars['tile_title']);
        }
        $vars['tile_visual'] = array(
          '#theme' => 'image_formatter',
          '#image_style' => isset($node->main_featured_visual) ? 'teaser_square' : 'teaser_square_small',
          '#item' => array(
            'uri' => $node->field_image_file[LANGUAGE_NONE][0]['uri'],
            //'title' => $overlay_caption,
            'alt' => $overlay_caption,
          ),
        );
      }
    }
    if ('detail' == $view_mode) {
      unset($vars['tile_title']);
      // Truncate the hover caption in length.
      $tile_caption_trunc = truncate_utf8($vars['tile_caption'], 330, TRUE, TRUE, 20);
      if ($tile_caption_trunc != $vars['tile_caption']) { $tile_caption_trunc .= ' (' . t('More') . '&nbsp;&#x21E2;)'; }
      $vars['tile_caption'] = $tile_caption_trunc;
      // Swipebox the image.
      $image_path = $node->field_image_file[LANGUAGE_NONE][0]['uri'];
      $image_full_path = image_style_url('full', $image_path);
      $image_tag = theme('image_style', array('style_name' => 'full', 'path' => $image_path, 'alt' => $image_caption));
      $vars['tile_visual'] = '<a href="' . $image_full_path . '" class="swipebox" data-title="' . $overlay_caption . '">' . $image_tag . '</a>';
    }

    // For teaser view mode, use tile style 3 (title/caption slide up on hover).
    if ('teaser' == $view_mode) {
      $vars['tile_style'] = ('visual' == $type) ? 2 : 0;
    }
    // For feature view mode, use tile style 2 (title+caption static with floor fade).
    else if ('feature' == $view_mode) {
      $vars['tile_style'] = 2;
      $vars['tile_attributes'] .= ' data-stellar-ratio="0.66" ';
    }
    // For everything else...
    else {
      // ... if title or caption exits ...
      if (!empty($vars['tile_title']) || !empty($vars['tile_caption'])) {
        // ... alternate tile styles 1 and 2 for short captions (<64)
//        if (strlen(strip_tags($vars['tile_caption'])) < 64) {
//          $tile_style_cycle = ($tile_style_cycle + 1) % 2;
//          $vars['tile_style'] = 1 + $tile_style_cycle;
//        }
//        // ... or use tile style 3 for longer captions (sliding up)
//        else
        {
          $vars['tile_style'] = 3;
        }
      }
      // For text-less tiles use tile style 2.
      else {
        $vars['tile_style'] = 2;
      }
    }
  }


  if (in_array($type, array('portrait', 'page'))) {
    // Replace title with parent content's title.
//    if (isset($node->field_parent_content[LANGUAGE_NONE])) {
//      $parent = node_load($node->field_parent_content[LANGUAGE_NONE][0]['target_id']);
//      $vars['title'] = $parent->title;
//    }
//    foreach() {
//      $vars['tiles'][] = array(
//        'caption' => $vars['content']['field_visual_caption'],
//        'visual'  => $vars['content']['field_image_file'],
//        'title'   => $vars['title'],
//      );
//    }
  }
}


/**
 * Implementation of theme_image().
 */
function exhibition_image($variables) {
  //return theme_image($variables);
  $attributes = $variables ['attributes'];

  // Populate SRC
  $attributes ['src'] = file_create_url($variables ['path']);

  $attributes ['data-src'] = $attributes ['src'];

  // Determine whether to lazy load (don't lazy load dynamically resize width:100% images).
  if (!isset($variables['lazy-load'])) {
    $variables['lazy-load'] = TRUE;
    if (isset($variables['style_name']) && ('feature_wide' == $variables['style_name'])) { $variables['lazy-load'] = FALSE; }
  }
  if ($variables['lazy-load']) {
    $attributes ['src'] = base_path() . drupal_get_path('theme', 'exhibition') . '/images/empty.gif';
    // Add marker for lazy loading waiting styles.
    $attributes['class'][] = 'lazy-waiting';
    // Try to find suitable retina file.
    $attributes ['data-src-retina'] = file_create_url($variables ['path']);
  }

  // Add certain theme function variables as attributes.
  foreach (array('width', 'height', 'alt', 'title') as $key) {
    if (isset($variables [$key])) {
      $attributes [$key] = $variables [$key];
    }
  }

  return '<img' . drupal_attributes($attributes) . ' />';
}


/**
 * Implements hook_preprocess_html().
 */
function exhibition_preprocess_html(&$variables) {
  drupal_add_css('http://maxcdn.bootstrapcdn.com/font-awesome/4.3.0/css/font-awesome.min.css', array('type' => 'external'));
}


// END OF FILE marker.
