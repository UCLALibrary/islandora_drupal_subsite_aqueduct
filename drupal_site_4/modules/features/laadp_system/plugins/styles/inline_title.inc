<?php

/**
 * A style wrapper for an inline pane title.
 */
$plugin = array(
  'inline_title' => array(
    'title' => t('Inline pane title'),
    'description' => t('Display the pane title inline with the content of the pane.'),
    'render pane' => 'inline_title_render_pane',
    'pane settings form' => 'inline_title_settings_form',
  ),
);

/**
 * Render callback for a single pane.
 */
function theme_inline_title_render_pane($vars) {
  $content = $vars['content'];
  $pane = $vars['pane'];
  $display = $vars['display'];

  if (empty($content->content)) {
    return;
  }

  $classes = array();
  $classes[] = 'pane-inline-title';
  if (isset($content->css_class) && !empty($content->css_class)) {
    $classes[] = $content->css_class;
  }
  if (isset($content->subtype) && !empty($content->subtype)) {
    $classes[] = drupal_html_class('pane-'. $content->subtype);
  }

  $output = '';
  //$output = theme('panels_pane', array('content' => $content, 'pane' => $pane, 'display' => $display));

  // Add the pane title.
  if (isset($content->title) && !empty($content->title)) {
    $output .= '<span class="pane-title">' . $content->title . '</span>';
  }

  // Add the content wrapper.
  $output .= '<span class="pane-content">';
  if (is_array($content->content)) {
    $output .= drupal_render($content->content);
  }
  else {
    $output .= $content->content;
  }
  $output .= '</span>';

  // Add any classes.
  if (isset($content->subtype) && !empty($content->subtype)) {
    $classes[] = drupal_html_class($content->subtype);
  }
  elseif (isset($content->delta) && !empty($content->delta)) {
    $classes[] = drupal_html_class($content->delta);
  }
  elseif (isset($content->type) && !empty($content->type)) {
    $classes[] = drupal_html_class($content->type);
  }

  $output = str_replace("</div", "</span", str_replace("<div", "<span", $output));

  // Just stick a div with a CSS class around the standard theme_panels_pane.
  $output = '<div class="'. implode(' ', $classes) .'">' . $output . '</div>';
  return $output;
}

function inline_title_settings_form($style_settings) {
  $form = array();
  return $form;
}
