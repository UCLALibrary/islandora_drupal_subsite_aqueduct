<?php
/**
 * @file
 * ct_standard.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ct_standard_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ct_standard_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ct_standard_node_info() {
  $items = array(
    'standard_content' => array(
      'name' => t('Standard Content Type'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
