<?php
/**
 * @file
 * exhibition_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function exhibition_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function exhibition_content_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function exhibition_content_node_info() {
  $items = array(
    'author' => array(
      'name' => t('Author'),
      'base' => 'node_content',
      'description' => t('The published original creator of a content.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'detail' => array(
      'name' => t('Detail'),
      'base' => 'node_content',
      'description' => t('A detail, snippet, fact etc to be embedded or listed.'),
      'has_title' => '1',
      'title_label' => t('Working title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('A content page for background information or other content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'portrait' => array(
      'name' => t('Portrait'),
      'base' => 'node_content',
      'description' => t('The portrait of a person that\'s subject of this project.'),
      'has_title' => '1',
      'title_label' => t('Title (Firstname + Initial)'),
      'help' => '',
    ),
    'visual' => array(
      'name' => t('Visual'),
      'base' => 'node_content',
      'description' => t('An image or a video.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
