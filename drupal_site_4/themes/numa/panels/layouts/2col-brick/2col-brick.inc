<?php

/**
 * @file
 * Defines a simple 2-column grid layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('2 Column brick'),
  'icon' => 'preview.png',
  'category' => t('LAADP'),
  'theme' => '2col_brick',
  'css' => '../../../css/layouts/2col-brick/2col-brick.layout.css',
  'regions' => array(
    'top' => t('Top'),
    'above_one' => t('Above One'),
    'above_two' => t('Above Two'),
    'main' => t('Main'),
    'middle_one' => t('Middle One'),
    'middle_two' => t('Middle Two'),
    'bottom' => t('Bottom'),
  ),
);

/**
 * Implements hook_preprocess_2col_brick().
 */
function template_preprocess_2col_brick(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-display';
  $variables['attributes_array']['class'][] = 'panel-display--2col-brick';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = '2col-brick-region';
    $variables['region_attributes_array'][$name]['class'][] = '2col-brick-region--' . drupal_clean_css_identifier($name);
  }
}
