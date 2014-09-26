<?php
/**
 * @file
 * ct_scholarship_item.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ct_scholarship_item_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_author|node|scholarship_item|form';
  $field_group->group_name = 'group_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scholarship_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Author Biography Fields',
    'weight' => '45',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_credentials',
      3 => 'field_biography_image',
      4 => 'field_author_biography',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_author|node|scholarship_item|form'] = $field_group;

  return $export;
}
