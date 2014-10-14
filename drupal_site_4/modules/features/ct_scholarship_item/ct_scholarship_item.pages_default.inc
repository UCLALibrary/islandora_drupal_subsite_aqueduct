<?php
/**
 * @file
 * ct_scholarship_item.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ct_scholarship_item_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Scholarship Item',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-post-style',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Taxonomy term from Node (on Node: Category [field_category])',
        'keyword' => 'taxonomy_term',
        'name' => 'entity_from_field:field_category-node-taxonomy_term',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'scholarship_item' => 'scholarship_item',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '2',
            1 => array(),
            2 => array(
              4 => '4',
            ),
            3 => array(),
          ),
          'context' => 'relationship_entity_from_field:field_category-node-taxonomy_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = '2col-brick';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'main' => NULL,
      'middle_one' => NULL,
      'middle_two' => NULL,
      'above_one' => NULL,
      'above_two' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '6a70f231-29eb-4ae2-a5e0-a48ab31ab711';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-449c88ff-b138-4728-8828-db7bc2c1c4f6';
    $pane->panel = 'bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'scholarship_author_bio-scholarship_bio_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '449c88ff-b138-4728-8828-db7bc2c1c4f6';
    $display->content['new-449c88ff-b138-4728-8828-db7bc2c1c4f6'] = $pane;
    $display->panels['bottom'][0] = 'new-449c88ff-b138-4728-8828-db7bc2c1c4f6';
    $pane = new stdClass();
    $pane->pid = 'new-ca34d341-df42-4962-ba97-cbc15b604f9e';
    $pane->panel = 'bottom';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Tags',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'inline_title',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ca34d341-df42-4962-ba97-cbc15b604f9e';
    $display->content['new-ca34d341-df42-4962-ba97-cbc15b604f9e'] = $pane;
    $display->panels['bottom'][1] = 'new-ca34d341-df42-4962-ba97-cbc15b604f9e';
    $pane = new stdClass();
    $pane->pid = 'new-f083ada9-3f79-4755-86d6-f6aef1ef1e46';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image_gallery';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'galleria',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'optionset' => 'default',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f083ada9-3f79-4755-86d6-f6aef1ef1e46';
    $display->content['new-f083ada9-3f79-4755-86d6-f6aef1ef1e46'] = $pane;
    $display->panels['main'][0] = 'new-f083ada9-3f79-4755-86d6-f6aef1ef1e46';
    $pane = new stdClass();
    $pane->pid = 'new-51d1db6d-91c8-43fa-8cac-26e8d4612a38';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_main_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '51d1db6d-91c8-43fa-8cac-26e8d4612a38';
    $display->content['new-51d1db6d-91c8-43fa-8cac-26e8d4612a38'] = $pane;
    $display->panels['main'][1] = 'new-51d1db6d-91c8-43fa-8cac-26e8d4612a38';
    $pane = new stdClass();
    $pane->pid = 'new-af0413ef-96be-4c8e-807f-c8b3ee54279d';
    $pane->panel = 'middle_one';
    $pane->type = 'content_user_links';
    $pane->subtype = 'content_user_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'af0413ef-96be-4c8e-807f-c8b3ee54279d';
    $display->content['new-af0413ef-96be-4c8e-807f-c8b3ee54279d'] = $pane;
    $display->panels['middle_one'][0] = 'new-af0413ef-96be-4c8e-807f-c8b3ee54279d';
    $pane = new stdClass();
    $pane->pid = 'new-d84a80c7-e9c2-4c75-baf6-52e84fcbf273';
    $pane->panel = 'middle_two';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd84a80c7-e9c2-4c75-baf6-52e84fcbf273';
    $display->content['new-d84a80c7-e9c2-4c75-baf6-52e84fcbf273'] = $pane;
    $display->panels['middle_two'][0] = 'new-d84a80c7-e9c2-4c75-baf6-52e84fcbf273';
    $pane = new stdClass();
    $pane->pid = 'new-07717dc3-d219-4364-bbe6-5426037be817';
    $pane->panel = 'top';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '07717dc3-d219-4364-bbe6-5426037be817';
    $display->content['new-07717dc3-d219-4364-bbe6-5426037be817'] = $pane;
    $display->panels['top'][0] = 'new-07717dc3-d219-4364-bbe6-5426037be817';
    $pane = new stdClass();
    $pane->pid = 'new-7e8c41a0-d062-42b7-9bda-65333b1d15ad';
    $pane->panel = 'top';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'laadp_long',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7e8c41a0-d062-42b7-9bda-65333b1d15ad';
    $display->content['new-7e8c41a0-d062-42b7-9bda-65333b1d15ad'] = $pane;
    $display->panels['top'][1] = 'new-7e8c41a0-d062-42b7-9bda-65333b1d15ad';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ct_scholarship_item_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'scholarship_posts_by_author';
  $page->task = 'page';
  $page->admin_title = 'Scholarship posts by author';
  $page->admin_description = '';
  $page->path = 'scholarship/%user/posts';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_scholarship_posts_by_author_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'scholarship_posts_by_author';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-scholarship-author-posts',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'dc65c2d5-317f-418e-8b76-68fed1afec23';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e3225d62-9957-41a8-9116-e332a668a8b3';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'scholarship_author_bio-authors_posts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e3225d62-9957-41a8-9116-e332a668a8b3';
    $display->content['new-e3225d62-9957-41a8-9116-e332a668a8b3'] = $pane;
    $display->panels['middle'][0] = 'new-e3225d62-9957-41a8-9116-e332a668a8b3';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-e3225d62-9957-41a8-9116-e332a668a8b3';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['scholarship_posts_by_author'] = $page;

  return $pages;

}
