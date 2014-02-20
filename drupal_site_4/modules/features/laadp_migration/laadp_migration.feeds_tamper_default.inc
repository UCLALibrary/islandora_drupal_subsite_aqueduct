<?php
/**
 * @file
 * laadp_migration.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function laadp_migration_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-authority_creatorcn-array_filter';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Authority.CreatorCN';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Filter empty items';
  $export['laadp_catalog_items-authority_creatorcn-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-authority_creatorcn-explode';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Authority.CreatorCN';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['laadp_catalog_items-authority_creatorcn-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-authority_creatorpn-array_filter';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Authority.CreatorPN';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Filter empty items';
  $export['laadp_catalog_items-authority_creatorpn-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-authority_creatorpn-explode';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Authority.CreatorPN';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['laadp_catalog_items-authority_creatorpn-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-authority_descriptive-array_filter';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Authority.descriptive';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Filter empty items';
  $export['laadp_catalog_items-authority_descriptive-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-authority_descriptive-explode';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Authority.descriptive';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['laadp_catalog_items-authority_descriptive-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-authority_people-array_filter';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Authority.people';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Filter empty items';
  $export['laadp_catalog_items-authority_people-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-authority_people-explode';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Authority.people';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['laadp_catalog_items-authority_people-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-creator_cn-array_filter';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Creator.CN';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Filter empty items';
  $export['laadp_catalog_items-creator_cn-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-creator_cn-explode';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Creator.CN';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['laadp_catalog_items-creator_cn-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-creator_cn_authority-array_filter';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Creator.CN Authority';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Filter empty items';
  $export['laadp_catalog_items-creator_cn_authority-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-creator_cn_authority-explode';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Creator.CN Authority';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['laadp_catalog_items-creator_cn_authority-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-creator_pn-array_filter';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Creator.PN';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Filter empty items';
  $export['laadp_catalog_items-creator_pn-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-creator_pn-explode';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Creator.PN';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['laadp_catalog_items-creator_pn-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-creator_pn_authority-array_filter';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Creator.PN Authority';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Filter empty items';
  $export['laadp_catalog_items-creator_pn_authority-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-creator_pn_authority-explode';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Creator.PN Authority';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['laadp_catalog_items-creator_pn_authority-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-identifier-array_filter';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Identifier';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Filter empty items';
  $export['laadp_catalog_items-identifier-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-physicaldescription_dimensions-array_filter';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'PhysicalDescription.dimensions';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Filter empty items';
  $export['laadp_catalog_items-physicaldescription_dimensions-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-physicaldescription_extent-rewrite';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'PhysicalDescription.extent';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[PhysicalDescription.extent] [PhysicalDescription.dimensions]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['laadp_catalog_items-physicaldescription_extent-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-subect_geographictopic-array_filter';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Subect.geographicTopic';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Filter empty items';
  $export['laadp_catalog_items-subect_geographictopic-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-subect_geographictopic-explode';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Subect.geographicTopic';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['laadp_catalog_items-subect_geographictopic-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-subect_geographictopic_authority-array_filter';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Subect.geographicTopic Authority';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Filter empty items';
  $export['laadp_catalog_items-subect_geographictopic_authority-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-subect_geographictopic_authority-explode';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Subect.geographicTopic Authority';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['laadp_catalog_items-subect_geographictopic_authority-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-subject_concepttopic-array_filter';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Subject.conceptTopic';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Filter empty items';
  $export['laadp_catalog_items-subject_concepttopic-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-subject_concepttopic-explode';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Subject.conceptTopic';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['laadp_catalog_items-subject_concepttopic-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-subject_concepttopic_authority-array_filter';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Subject.conceptTopic Authority';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Filter empty items';
  $export['laadp_catalog_items-subject_concepttopic_authority-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-subject_concepttopic_authority-explode';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Subject.conceptTopic Authority';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['laadp_catalog_items-subject_concepttopic_authority-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-subject_descriptivetopic-array_filter';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Subject.descriptiveTopic';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Filter empty items';
  $export['laadp_catalog_items-subject_descriptivetopic-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-subject_descriptivetopic-explode';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Subject.descriptiveTopic';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['laadp_catalog_items-subject_descriptivetopic-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-subject_descriptivetopic_authority-array_filter';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Subject.descriptiveTopic Authority';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Filter empty items';
  $export['laadp_catalog_items-subject_descriptivetopic_authority-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-subject_descriptivetopic_authority-explode';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Subject.descriptiveTopic Authority';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['laadp_catalog_items-subject_descriptivetopic_authority-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-subject_name-array_filter';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Subject.name';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Filter empty items';
  $export['laadp_catalog_items-subject_name-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-subject_name-explode';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Subject.name';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['laadp_catalog_items-subject_name-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-subject_name_authority-array_filter';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Subject.name Authority';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Filter empty items';
  $export['laadp_catalog_items-subject_name_authority-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-subject_name_authority-explode';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Subject.name Authority';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['laadp_catalog_items-subject_name_authority-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-type_genre-unique';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Type.genre';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Unique';
  $export['laadp_catalog_items-type_genre-unique'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-type_genre_authority-array_filter';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Type.genre Authority';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Filter empty items';
  $export['laadp_catalog_items-type_genre_authority-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'laadp_catalog_items-type_genre_authority-explode';
  $feeds_tamper->importer = 'laadp_catalog_items';
  $feeds_tamper->source = 'Type.genre Authority';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['laadp_catalog_items-type_genre_authority-explode'] = $feeds_tamper;

  return $export;
}
