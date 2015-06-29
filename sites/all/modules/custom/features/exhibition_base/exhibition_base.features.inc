<?php
/**
 * @file
 * exhibition_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function exhibition_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "environment_indicator" && $api == "default_environment_indicator_environments") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function exhibition_base_image_default_styles() {
  $styles = array();

  // Exported image style: feature_upright.
  $styles['feature_upright'] = array(
    'label' => 'Feature upright (2:3)',
    'effects' => array(
      4 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1200,
          'height' => 1800,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'feature_upright',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: feature_wide.
  $styles['feature_wide'] = array(
    'label' => 'Feature wide (3:2)',
    'effects' => array(
      3 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1800,
          'height' => 1199,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'feature_wide',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: full.
  $styles['full'] = array(
    'label' => 'Full view (scaled)',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1600,
          'height' => 1600,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: teaser_original.
  $styles['teaser_original'] = array(
    'label' => 'Teaser original',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 300,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: teaser_square.
  $styles['teaser_square'] = array(
    'label' => 'Teaser square',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 300,
          'height' => 300,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'teaser_square',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: teaser_square_small.
  $styles['teaser_square_small'] = array(
    'label' => 'Teaser square small',
    'effects' => array(
      7 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reusestyle' => 'teaser_square',
          'style_name' => 'teaser_square_small',
        ),
        'weight' => 0,
      ),
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => 150,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: teaser_square_tiny.
  $styles['teaser_square_tiny'] = array(
    'label' => 'Teaser square tiny',
    'effects' => array(
      9 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reusestyle' => 'teaser_square',
          'style_name' => 'teaser_square_tiny',
        ),
        'weight' => 0,
      ),
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 60,
          'height' => 60,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
