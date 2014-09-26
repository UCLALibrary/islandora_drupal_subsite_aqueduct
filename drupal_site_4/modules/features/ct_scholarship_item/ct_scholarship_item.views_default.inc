<?php
/**
 * @file
 * ct_scholarship_item.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ct_scholarship_item_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'scholarship_author_bio';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Scholarship Author Bio';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'View all posts by ';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Biography Image */
  $handler->display->display_options['fields']['field_biography_image']['id'] = 'field_biography_image';
  $handler->display->display_options['fields']['field_biography_image']['table'] = 'field_data_field_biography_image';
  $handler->display->display_options['fields']['field_biography_image']['field'] = 'field_biography_image';
  $handler->display->display_options['fields']['field_biography_image']['label'] = '';
  $handler->display->display_options['fields']['field_biography_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_biography_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_biography_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_biography_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_biography_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_biography_image']['settings'] = array(
    'image_style' => 'biography_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_biography_image']['field_api_classes'] = TRUE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['element_default_classes'] = FALSE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['element_default_classes'] = FALSE;
  /* Field: Content: Author Biography */
  $handler->display->display_options['fields']['field_author_biography']['id'] = 'field_author_biography';
  $handler->display->display_options['fields']['field_author_biography']['table'] = 'field_data_field_author_biography';
  $handler->display->display_options['fields']['field_author_biography']['field'] = 'field_author_biography';
  $handler->display->display_options['fields']['field_author_biography']['label'] = '';
  $handler->display->display_options['fields']['field_author_biography']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_biography']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_biography']['element_default_classes'] = FALSE;
  /* Field: Content: Credentials */
  $handler->display->display_options['fields']['field_credentials']['id'] = 'field_credentials';
  $handler->display->display_options['fields']['field_credentials']['table'] = 'field_data_field_credentials';
  $handler->display->display_options['fields']['field_credentials']['field'] = 'field_credentials';
  $handler->display->display_options['fields']['field_credentials']['label'] = '';
  $handler->display->display_options['fields']['field_credentials']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_credentials']['alter']['text'] = '[field_first_name] [field_last_name], [field_credentials] - [field_author_biography]';
  $handler->display->display_options['fields']['field_credentials']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credentials']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_credentials']['empty'] = '[field_first_name] [field_author_name] - [field_author_biography]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View all posts by [field_first_name] [field_last_name] >';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'scholarship/[field_last_name]/posts';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'scholarship_item' => 'scholarship_item',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'scholarship_bio_pane');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Biography Image */
  $handler->display->display_options['fields']['field_biography_image']['id'] = 'field_biography_image';
  $handler->display->display_options['fields']['field_biography_image']['table'] = 'field_data_field_biography_image';
  $handler->display->display_options['fields']['field_biography_image']['field'] = 'field_biography_image';
  $handler->display->display_options['fields']['field_biography_image']['label'] = '';
  $handler->display->display_options['fields']['field_biography_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_biography_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_biography_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_biography_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_biography_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_biography_image']['settings'] = array(
    'image_style' => 'biography_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_biography_image']['field_api_classes'] = TRUE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['element_default_classes'] = FALSE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['element_default_classes'] = FALSE;
  /* Field: Content: Author Biography */
  $handler->display->display_options['fields']['field_author_biography']['id'] = 'field_author_biography';
  $handler->display->display_options['fields']['field_author_biography']['table'] = 'field_data_field_author_biography';
  $handler->display->display_options['fields']['field_author_biography']['field'] = 'field_author_biography';
  $handler->display->display_options['fields']['field_author_biography']['label'] = '';
  $handler->display->display_options['fields']['field_author_biography']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_biography']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_author_biography']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_author_biography']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_biography']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_author_biography']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_author_biography']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Credentials */
  $handler->display->display_options['fields']['field_credentials']['id'] = 'field_credentials';
  $handler->display->display_options['fields']['field_credentials']['table'] = 'field_data_field_credentials';
  $handler->display->display_options['fields']['field_credentials']['field'] = 'field_credentials';
  $handler->display->display_options['fields']['field_credentials']['label'] = '';
  $handler->display->display_options['fields']['field_credentials']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_credentials']['alter']['text'] = '<strong>[field_first_name] [field_last_name], [field_credentials]</strong> - [field_author_biography]';
  $handler->display->display_options['fields']['field_credentials']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_credentials']['element_class'] = 'author-bio-summary';
  $handler->display->display_options['fields']['field_credentials']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credentials']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_credentials']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_credentials']['empty'] = '<strong>[field_first_name] [field_author_name]</strong> - [field_author_biography]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View all posts by [field_first_name] [field_last_name] >';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'scholarship/[field_last_name]/posts';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'view-more-link';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'authors_posts');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = ' [field_first_name] [field_last_name]\'s Scholarship Posts';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['element_default_classes'] = FALSE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['element_default_classes'] = FALSE;
  /* Field: Content: Image Gallery */
  $handler->display->display_options['fields']['field_image_gallery']['id'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['table'] = 'field_data_field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['field'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_image_gallery']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_gallery']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image_gallery']['element_wrapper_class'] = 'field field--name-field-image field--type-image';
  $handler->display->display_options['fields']['field_image_gallery']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_gallery']['settings'] = array(
    'image_style' => 'category_page_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image_gallery']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_image_gallery']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Last Name (field_last_name) */
  $handler->display->display_options['arguments']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['arguments']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['arguments']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['arguments']['field_last_name_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_last_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_last_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_last_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_last_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_last_name_value']['limit'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_last_name_value' => array(
      'type' => 'panel',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Last Name (field_last_name)',
    ),
  );
  $export['scholarship_author_bio'] = $view;

  return $export;
}
