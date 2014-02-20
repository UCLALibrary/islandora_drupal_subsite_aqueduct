<?php
/**
 * @file
 * laadp_footer.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function laadp_footer_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-footer-field_footer_text'
  $field_instances['bean-footer-field_footer_text'] = array(
    'bundle' => 'footer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_footer_text',
    'label' => 'Footer Text',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 0,
          'ta_editor' => 'ta_editor',
          'token' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => -10,
            ),
            'ta_editor' => array(
              'weight' => -9,
            ),
            'token' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Text');

  return $field_instances;
}
