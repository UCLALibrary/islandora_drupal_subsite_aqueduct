<?php
/**
 * @file
 * laadp_footer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function laadp_footer_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
