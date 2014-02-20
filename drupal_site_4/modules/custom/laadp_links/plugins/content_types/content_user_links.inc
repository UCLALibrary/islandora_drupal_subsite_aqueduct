<?php
/**
 * @file
 * Provides the sidebar menu for work "All Projects" pages.
 */

$plugin = array(
  'title' => t('Social Links'),
  'description' => t('Displays Social links'),
  'single' => TRUE,
  'required context' => new ctools_context_optional(t('Node'), 'node'),
  'render callback' => 'content_user_links_content_type_render',
  'edit form' => 'content_user_links_content_type_edit_form',
  'category' => array(t('LAADP')),
  'defaults' => array(),
);

/**
 * Run-time rendering of the body of the block.
 *
 * @param $subtype
 * @param $conf
 *   Configuration as done at admin time.
 * @param $args
 * @param $context
 *   Context - we need to support both taxonomy terms and node context.
 *
 * @return
 *   An object with at least title and content members.
 */
function content_user_links_content_type_render($subtype, $conf, $args, $context) {
  $node = isset($context->data) && is_object($context->data) ? clone($context->data) : NULL;
  //$language = $node->language; // This line causes errors when $node context doesnt exist.
  $block = new stdClass();
  $block->content = theme('content_user_links', array('node' => $node));
  if ($block->content) {
    return $block;
  }
}

/**
 * 'Edit form' callback for the content type.
 */
function content_user_links_content_type_edit_form($form, &$form_state) {
  // Provide a blank form so we have a place to have context setting.
  return $form;
}
