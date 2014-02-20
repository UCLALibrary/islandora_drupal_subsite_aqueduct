<?php
/**
 * @file
 * laadp_footer.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function laadp_footer_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_footer_text'
  $field_bases['field_footer_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_footer_text',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  return $field_bases;
}
