<?php


include_once('seven_takeover/seven_template.php');


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
  static $tile_style_cycle = 0;

  $node = $vars['node'];
  $type = $vars['type'];
  $view_mode = $vars['view_mode'];
  $vars['tile_anchor'] = $node->nid;

  // Make view mode specific template suggestions.
  $vars['theme_hook_suggestions'][] = 'node__viewmode__' . $view_mode;
  $vars['theme_hook_suggestions'][] = 'node__' . $type . '__' . $view_mode;
  //$vars['theme_hook_suggestions'][] = 'tile';

  $GLOBALS['tile_style'] = ((isset($GLOBALS['tile_style']) ? $GLOBALS['tile_style'] : -1)+1) % 4;
  $vars['tile_style'] = $GLOBALS['tile_style'];

  if (in_array($type, array('visual', 'detail'))) {
    $vars['tile_class'] = 'viewmode-' . str_replace('_', '-', $view_mode);

    // Replace title with parent content's title.
    if (isset($node->field_parent_content[LANGUAGE_NONE])) {
      $parent = node_load($node->field_parent_content[LANGUAGE_NONE][0]['target_id']);
      $vars['title'] = $parent->title;
    }
    $vars['tile_caption'] = isset($vars['content']['field_visual_caption']) ? $vars['content']['field_visual_caption'][0]['#markup'] : NULL;
    $vars['tile_visual']  = $vars['content']['field_image_file'];
    $vars['tile_title']   = $vars['title'];
    if ('teaser' == $view_mode) {
      // Link tile to the visual's parent node.
      if (isset($node->field_parent_content[LANGUAGE_NONE])) {
        $vars['tile_url'] = url('node/' . $node->field_parent_content[LANGUAGE_NONE][0]['target_id'], array('fragment' => 'tile-' . $node->nid));
      }
      unset($vars['tile_caption']);
      if ($type != 'detail') {
        unset($vars['tile_title']);
      }
      if (isset($node->main_featured_visual)) {
        $vars['tile_class'] = 'teaser-big';
      }
    }
    if ('detail' == $view_mode) {
      unset($vars['tile_title']);
    }

    // For teaser view mode, use tile style 3 (title/caption slide up on hover).
    if ('teaser' == $view_mode) {
      $vars['tile_style'] = 2;
    }
    // For feature view mode, use tile style 2 (title+caption static with floor fade).
    else if ('feature' == $view_mode) {
      $vars['tile_style'] = 2;
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
    $attributes ['src'] = '';
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

// END OF FILE marker.
