<?php

/**
 * Implements hook_preprocess_html().
 */
function numa_preprocess_html(&$variables) {

  // Test to see if any of the following classes are on the current page; if so,
  // set the bg variable, which is another separate class that must be added
  // to the HTML tag.  (See sass/components/_background.scss for details).
  $variables['bg'] = '';
  $pages = array(
    'fixed-background-image', // Some panels may add this body class.
    'front', // The homepage should have the background image.
    'page-resources', // The resources page should have the background image.
    'page-taxonomy-term', // Taxonomy term pages should have the background image.
    'page-search-form', // The search form should have the background image.
  );
  if (count(array_intersect($pages, $variables['classes_array']))) {
    $variables['bg'] = ' bg';
  }
}
