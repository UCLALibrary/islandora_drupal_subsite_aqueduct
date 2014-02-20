<?php
/**
 * @file
 * laadp_arch.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function laadp_arch_taxonomy_default_vocabularies() {
  return array(
    'content_category' => array(
      'name' => 'Resources',
      'machine_name' => 'content_category',
      'description' => 'Content must be catagorized for navigation.  Possible categories include Biographies, Scholarship, etc.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
