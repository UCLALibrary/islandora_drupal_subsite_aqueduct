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
      5 => 'field_creator',
      6 => 'field_date_created',
      7 => 'field_folder_number',
      8 => 'field_genre',
      9 => 'field_identifier',
      10 => 'field_location',
      11 => 'field_oac_url',
      12 => 'field_people',
      13 => 'field_physical_description',
      14 => 'field_publisher',
      15 => 'field_subject',
      16 => 'field_djatoka_image',
      17 => 'field_pdf_viewer',
      18 => 'field_copyright_long',
      19 => 'field_citation_text',
      20 => 'field_field_digital_object',
      21 => 'title',
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
      6 => 'field_default_image',
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
