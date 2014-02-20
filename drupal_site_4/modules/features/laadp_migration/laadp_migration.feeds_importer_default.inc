<?php
/**
 * @file
 * laadp_migration.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function laadp_migration_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'laadp_catalog_items';
  $feeds_importer->config = array(
    'name' => 'LAADP Catalog Items',
    'description' => 'Importer for the Catalog Item content type.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml xls xlsx',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExcelParser',
      'config' => array(
        'no_headers' => 0,
        'all_worksheets' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'Collection Number',
            'target' => 'field_collection_number',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Collection Name',
            'target' => 'field_collection_name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Box #',
            'target' => 'field_box_number',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Folder #',
            'target' => 'field_folder_number',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'OAC Finding Aid URL',
            'target' => 'field_oac_url:url',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Identifier',
            'target' => 'field_identifier',
            'unique' => 0,
          ),
          7 => array(
            'source' => 'Creator.PN',
            'target' => 'field_creator',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Creator.CN',
            'target' => 'field_creator',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Date.creation',
            'target' => 'field_date_created',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Date.publication',
            'target' => 'field_date_created',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Date.normalized',
            'target' => 'field_date_normalized',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'PhysicalDescription.extent',
            'target' => 'field_physical_description',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Contributor.repository',
            'target' => 'field_contributing_institution',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Type.genre',
            'target' => 'field_genre',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Contributor.publisher',
            'target' => 'field_publisher',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Description.note',
            'target' => 'body',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'Subject.conceptTopic',
            'target' => 'field_subject',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          18 => array(
            'source' => 'Subject.descriptiveTopic',
            'target' => 'field_subject',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          19 => array(
            'source' => 'Subject.name',
            'target' => 'field_people',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'Subect.geographicTopic',
            'target' => 'field_location',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'Creator.PN Authority',
            'target' => 'field_creator_authority',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'Creator.CN Authority',
            'target' => 'field_creator_authority',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'Type.genre Authority',
            'target' => 'field_genre_authority',
            'unique' => FALSE,
          ),
          24 => array(
            'source' => 'Subject.conceptTopic Authority',
            'target' => 'field_subject_authority',
            'unique' => FALSE,
          ),
          25 => array(
            'source' => 'Subject.descriptiveTopic Authority',
            'target' => 'field_subject_authority',
            'unique' => FALSE,
          ),
          26 => array(
            'source' => 'Subject.name Authority',
            'target' => 'field_people_authority',
            'unique' => FALSE,
          ),
          27 => array(
            'source' => 'Subect.geographicTopic Authority',
            'target' => 'field_location_authority',
            'unique' => FALSE,
          ),
          28 => array(
            'source' => 'PhysicalDescription.dimensions',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          29 => array(
            'source' => 'Identifier',
            'target' => 'guid',
            'unique' => 1,
          ),
          30 => array(
            'source' => 'TestURL',
            'target' => 'field_djatoka_image',
            'unique' => FALSE,
          ),
          31 => array(
            'source' => 'Rights.copyrightStatus',
            'target' => 'field_copyright_long',
            'unique' => FALSE,
          ),
          32 => array(
            'source' => 'Rights.publicationStatus',
            'target' => 'field_copyright_long',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 1,
        'bundle' => 'catalog_item',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['laadp_catalog_items'] = $feeds_importer;

  return $export;
}
