<?php
/**
 * @file
 * laadp_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function laadp_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search_solr';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_node_index';
  $view->human_name = 'Search Solr';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No results found.';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>No results found. Verify that the keywords are correctly spelled.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'laadp_format';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_entity'] = 0;
  /* Field: Indexed Node: Djatoka Image */
  $handler->display->display_options['fields']['field_djatoka_image']['id'] = 'field_djatoka_image';
  $handler->display->display_options['fields']['field_djatoka_image']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_djatoka_image']['field'] = 'field_djatoka_image';
  $handler->display->display_options['fields']['field_djatoka_image']['label'] = '';
  $handler->display->display_options['fields']['field_djatoka_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_djatoka_image']['alter']['text'] = '<img src="[field_djatoka_image]/datastream/TN/view" alt="[field_djatoka_image]"/>';
  $handler->display->display_options['fields']['field_djatoka_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_djatoka_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_djatoka_image']['alter']['alt'] = '[title_1]';
  $handler->display->display_options['fields']['field_djatoka_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_djatoka_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_djatoka_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_djatoka_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_djatoka_image']['element_wrapper_class'] = 'search-thumb';
  $handler->display->display_options['fields']['field_djatoka_image']['element_default_classes'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Date Created */
  $handler->display->display_options['fields']['field_date_created']['id'] = 'field_date_created';
  $handler->display->display_options['fields']['field_date_created']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_date_created']['field'] = 'field_date_created';
  $handler->display->display_options['fields']['field_date_created']['label'] = 'Date';
  $handler->display->display_options['fields']['field_date_created']['hide_empty'] = TRUE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'catalog_item' => 'catalog_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'keywords';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'title' => 'title',
    'field_subjects_fulltext' => 'field_subjects_fulltext',
    'field_institution_fulltext' => 'field_institution_fulltext',
    'field_location_fulltext' => 'field_location_fulltext',
    'field_people_fulltext' => 'field_people_fulltext',
  );
  /* Filter criterion: Indexed Node: Subjects Fulltext */
  $handler->display->display_options['filters']['field_subjects_fulltext']['id'] = 'field_subjects_fulltext';
  $handler->display->display_options['filters']['field_subjects_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['field_subjects_fulltext']['field'] = 'field_subjects_fulltext';
  $handler->display->display_options['filters']['field_subjects_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['field_subjects_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subjects_fulltext']['expose']['operator_id'] = 'field_subjects_fulltext_op';
  $handler->display->display_options['filters']['field_subjects_fulltext']['expose']['label'] = 'Subjects';
  $handler->display->display_options['filters']['field_subjects_fulltext']['expose']['operator'] = 'field_subjects_fulltext_op';
  $handler->display->display_options['filters']['field_subjects_fulltext']['expose']['identifier'] = 'field_subjects_fulltext';
  $handler->display->display_options['filters']['field_subjects_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  /* Filter criterion: Indexed Node: Location Fulltext */
  $handler->display->display_options['filters']['field_location_fulltext']['id'] = 'field_location_fulltext';
  $handler->display->display_options['filters']['field_location_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['field_location_fulltext']['field'] = 'field_location_fulltext';
  $handler->display->display_options['filters']['field_location_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['field_location_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_fulltext']['expose']['operator_id'] = 'field_location_fulltext_op';
  $handler->display->display_options['filters']['field_location_fulltext']['expose']['label'] = 'Place';
  $handler->display->display_options['filters']['field_location_fulltext']['expose']['operator'] = 'field_location_fulltext_op';
  $handler->display->display_options['filters']['field_location_fulltext']['expose']['identifier'] = 'field_location_fulltext';
  $handler->display->display_options['filters']['field_location_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  /* Filter criterion: Indexed Node: People Fulltext */
  $handler->display->display_options['filters']['field_people_fulltext']['id'] = 'field_people_fulltext';
  $handler->display->display_options['filters']['field_people_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['field_people_fulltext']['field'] = 'field_people_fulltext';
  $handler->display->display_options['filters']['field_people_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['field_people_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_people_fulltext']['expose']['operator_id'] = 'field_people_fulltext_op';
  $handler->display->display_options['filters']['field_people_fulltext']['expose']['label'] = 'People';
  $handler->display->display_options['filters']['field_people_fulltext']['expose']['operator'] = 'field_people_fulltext_op';
  $handler->display->display_options['filters']['field_people_fulltext']['expose']['identifier'] = 'field_people_fulltext';
  $handler->display->display_options['filters']['field_people_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  /* Filter criterion: Indexed Node: Date Year */
  $handler->display->display_options['filters']['field_date_year']['id'] = 'field_date_year';
  $handler->display->display_options['filters']['field_date_year']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['field_date_year']['field'] = 'field_date_year';
  $handler->display->display_options['filters']['field_date_year']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_year']['group'] = 1;
  $handler->display->display_options['filters']['field_date_year']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_year']['expose']['operator_id'] = 'field_date_year_op';
  $handler->display->display_options['filters']['field_date_year']['expose']['label'] = 'from Year';
  $handler->display->display_options['filters']['field_date_year']['expose']['operator'] = 'field_date_year_op';
  $handler->display->display_options['filters']['field_date_year']['expose']['identifier'] = 'field_date_year';
  $handler->display->display_options['filters']['field_date_year']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  /* Filter criterion: Indexed Node: Date Year */
  $handler->display->display_options['filters']['field_date_year_1']['id'] = 'field_date_year_1';
  $handler->display->display_options['filters']['field_date_year_1']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['field_date_year_1']['field'] = 'field_date_year';
  $handler->display->display_options['filters']['field_date_year_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_year_1']['group'] = 1;
  $handler->display->display_options['filters']['field_date_year_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_year_1']['expose']['operator_id'] = 'field_date_year_1_op';
  $handler->display->display_options['filters']['field_date_year_1']['expose']['label'] = 'to Year';
  $handler->display->display_options['filters']['field_date_year_1']['expose']['operator'] = 'field_date_year_1_op';
  $handler->display->display_options['filters']['field_date_year_1']['expose']['identifier'] = 'field_date_year_1';
  $handler->display->display_options['filters']['field_date_year_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  /* Filter criterion: Indexed Node: Genre */
  $handler->display->display_options['filters']['field_genre']['id'] = 'field_genre';
  $handler->display->display_options['filters']['field_genre']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['field_genre']['field'] = 'field_genre';
  $handler->display->display_options['filters']['field_genre']['group'] = 1;
  $handler->display->display_options['filters']['field_genre']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_genre']['expose']['operator_id'] = 'field_genre_op';
  $handler->display->display_options['filters']['field_genre']['expose']['label'] = 'Kind of Content';
  $handler->display->display_options['filters']['field_genre']['expose']['operator'] = 'field_genre_op';
  $handler->display->display_options['filters']['field_genre']['expose']['identifier'] = 'field_genre';
  $handler->display->display_options['filters']['field_genre']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  /* Filter criterion: Indexed Node: Creator */
  $handler->display->display_options['filters']['field_creator']['id'] = 'field_creator';
  $handler->display->display_options['filters']['field_creator']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['field_creator']['field'] = 'field_creator';
  $handler->display->display_options['filters']['field_creator']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_creator']['expose']['operator_id'] = 'field_creator_op';
  $handler->display->display_options['filters']['field_creator']['expose']['label'] = 'Creator';
  $handler->display->display_options['filters']['field_creator']['expose']['operator'] = 'field_creator_op';
  $handler->display->display_options['filters']['field_creator']['expose']['identifier'] = 'field_creator';
  $handler->display->display_options['filters']['field_creator']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );

  /* Display: Search Context */
  $handler = $view->new_display('ctools_context', 'Search Context', 'search_solr_context');
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['search_solr'] = $view;

  return $export;
}
