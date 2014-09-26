<?php

/**
 * @file
 * Provides an empty spacer panel pane, used for adding vertical whitespace
 * separation between panes. This may be used to group some panes together
 * visually.
 */

$plugin = array(
  'title' => t('Vertical Spacer'),
  'description' => t('An empty pane that adds vertical whitespace.'),
  'single' => TRUE,
  'render callback' => 'vertical_spacer_render',
  'defaults' => array(),
  'category' => t('Page elements'),
  'edit form' => 'vertical_spacer_edit_form',
);

/**
 * Run-time rendering of the body of the block.
 *
 * @param $subtype
 * @param $conf
 *   Configuration as done at admin time.
 * @param $args
 * @param $context
 *   Context - in this case we don't have any.
 *
 * @return
 *   An object with at least title and content members.
 */
function vertical_spacer_render($subtype, $conf, $args, $context) {
  // The output.
  $block = new stdClass();
  $block->title = '';
  $block->content = '
<div class="vertical-spacer"></div>
';
  return $block;
}

/**
 * 'Edit form' callback.
 */
function vertical_spacer_edit_form($form, &$form_state) {
  return $form;
}
