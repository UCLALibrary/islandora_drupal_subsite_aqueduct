<?php
/**
 * @file
 * laadp_category_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function laadp_category_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function laadp_category_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function laadp_category_page_image_default_styles() {
  $styles = array();

  // Exported image style: category_page_thumbnail.
  $styles['category_page_thumbnail'] = array(
    'name' => 'category_page_thumbnail',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 251,
          'height' => 251,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
