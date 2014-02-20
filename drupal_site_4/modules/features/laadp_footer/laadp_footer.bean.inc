<?php
/**
 * @file
 * laadp_footer.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function laadp_footer_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'footer';
  $bean_type->label = 'Footer';
  $bean_type->options = '';
  $bean_type->description = 'An editable, translatable footer block. (Per the design, there should only really be 3 of these, they will be displayed the same on all pages using the Footer mini-panel).';
  $export['footer'] = $bean_type;

  return $export;
}
