<?php
/**
 * @file
 * laadp_users.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function laadp_users_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function laadp_users_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function laadp_users_flag_default_flags() {
  $flags = array();
  // Exported flag: "Bookmark catalog items".
  $flags['bookmark_catalog_items'] = array(
    'entity_type' => 'node',
    'title' => 'Bookmark catalog items',
    'global' => 0,
    'types' => array(
      0 => 'catalog_item',
    ),
    'flag_short' => 'Bookmark',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unbookmark',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'laadp_users',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
