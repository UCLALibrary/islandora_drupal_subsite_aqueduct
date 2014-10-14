<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Add tags'),
  'description' => t('Add tags for Standard Content Type'),
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'category' => t('LAADP'),
);

function ct_standard_add_tags_content_type_render($subtype, $conf, $panel_args, $context) {
  if (empty($context) || empty($context->data)) {
    return;
  }

  $node = $context->data;

  // Ensure that current node is of Standard Content Type
  if ($node->type != 'standard_content') {
  	return;
  }

  // Ensure access to update the entity is granted.
  if (!node_access('update', $node)) {
    return;
  }

  // Ensure access to actually update this particular field is granted.
  $field = field_info_field('field_tags');
  if (!field_access('edit', $field, 'node', $node)) {
    return;
  }

  // Load the modal library and add the modal javascript.
  ct_standard_add_tags_modal_style();

  $output = l('Add tags', 'admin/field/edit/node/' . $node->nid . '/field_tags/ajax', array('attributes' => array('class' => array('ctools-use-modal', 'ctools-modal-laadp-modal-style'))));

  // Build the content type block.
  $block = new stdClass();
  $block->content = $output;

  return $block;
}


function ct_standard_add_tags_modal_style() {
  // include libraries
  ctools_include('modal');
  ctools_include('ajax');
  ctools_modal_add_js();

  // styles to use for the modal
  $modal_style = array(
    'laadp-modal-style' => array(
      'modalSize' => array(
        'type' => 'fixed',
        'width' => 500,
        'height' => 270,
        'addWidth' => 0,
        'addHeight' => 0,
        'contentRight' => 0,
      ),
      'modalOptions' => array(
        'opacity' => .0,
        'background-color' => '#000',
      ),
      'animation' => 'fadeIn',
    ),
  );

  // add the ctool modal configuration to settings
  drupal_add_js($modal_style, 'setting');
}
