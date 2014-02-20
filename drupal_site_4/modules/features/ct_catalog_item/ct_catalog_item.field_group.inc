<?php
/**
 * @file
 * ct_catalog_item.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ct_catalog_item_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_displayed|node|catalogue_item|form';
  $field_group->group_name = 'group_displayed';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'catalog_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Displayed',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_box_number',
      2 => 'field_collection_name',
      3 => 'field_collection_number',
      4 => 'field_contributing_institution',
      5 => 'field_copyright',
      6 => 'field_creator',
      7 => 'field_date_created',
      8 => 'field_djatoka_image',
      9 => 'field_folder_number',
      10 => 'field_genre',
      11 => 'field_identifier',
      12 => 'field_location',
      13 => 'field_oac_url',
      14 => 'field_pdf_viewer',
      15 => 'field_people',
      16 => 'field_physical_description',
      17 => 'field_publisher',
      18 => 'field_subject',
      19 => 'field_copyright_long',
      20 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Displayed',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_displayed|node|catalogue_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_feeds|node|catalogue_item|form';
  $field_group->group_name = 'group_feeds';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'catalog_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Feeds only',
    'weight' => '3',
    'children' => array(
      0 => 'field_creator_authority',
      1 => 'field_date_normalized',
      2 => 'field_genre_authority',
      3 => 'field_location_authority',
      4 => 'field_people_authority',
      5 => 'field_subject_authority',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Feeds only',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_feeds|node|catalogue_item|form'] = $field_group;

  return $export;
}
