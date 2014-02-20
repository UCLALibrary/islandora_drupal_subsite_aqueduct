<?php
/**
 * @file
 * laadp_about.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function laadp_about_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-about:menu-dummy
  $menu_links['menu-about:menu-dummy'] = array(
    'menu_name' => 'menu-about',
    'link_path' => 'menu-dummy',
    'router_path' => 'menu-dummy',
    'link_title' => 'Partners',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: menu-about:node/10
  $menu_links['menu-about:node/10'] = array(
    'menu_name' => 'menu-about',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'About the Project',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About the Project');
  t('Partners');


  return $menu_links;
}
