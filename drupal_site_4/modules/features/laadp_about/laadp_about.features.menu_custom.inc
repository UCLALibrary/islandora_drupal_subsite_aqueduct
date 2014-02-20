<?php
/**
 * @file
 * laadp_about.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function laadp_about_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-about.
  $menus['menu-about'] = array(
    'menu_name' => 'menu-about',
    'title' => 'About',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');


  return $menus;
}
