<?php
/**
 * @file
 * ct_catalog_item.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ct_catalog_item_taxonomy_default_vocabularies() {
  return array(
    'subjects' => array(
      'name' => 'Catalog Item Subjects',
      'machine_name' => 'subjects',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
