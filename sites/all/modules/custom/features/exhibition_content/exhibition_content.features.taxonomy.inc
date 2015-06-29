<?php
/**
 * @file
 * exhibition_content.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function exhibition_content_taxonomy_default_vocabularies() {
  return array(
    'epoch' => array(
      'name' => 'Epoch',
      'machine_name' => 'epoch',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tag' => array(
      'name' => 'Tag',
      'machine_name' => 'tag',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
