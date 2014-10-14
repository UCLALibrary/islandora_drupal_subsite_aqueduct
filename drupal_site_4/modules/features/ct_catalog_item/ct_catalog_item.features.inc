<?php
/**
 * @file
 * ct_catalog_item.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ct_catalog_item_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ct_catalog_item_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ct_catalog_item_node_info() {
  $items = array(
    'catalog_item' => array(
      'name' => t('Catalog Item'),
      'base' => 'node_content',
      'description' => t('Content type to hold digitized content related to the LAADP.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
