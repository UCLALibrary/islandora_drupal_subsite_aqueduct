<?php
/**
 * @file
 * ct_standard.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ct_standard_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Standard Content',
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
              'standard_content' => 'standard_content',
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
              12 => '12',
            ),
            3 => array(),
          ),
          'context' => 'relationship_entity_from_field:field_category-node-taxonomy_term_1',
          'not' => TRUE,
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
  $display->uuid = '78bd9160-d79c-4890-bbfa-ad9a6acee10d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ee1aabac-2d07-420f-9636-ff6401ff6c59';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
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
    $pane->uuid = 'ee1aabac-2d07-420f-9636-ff6401ff6c59';
    $display->content['new-ee1aabac-2d07-420f-9636-ff6401ff6c59'] = $pane;
    $display->panels['bottom'][0] = 'new-ee1aabac-2d07-420f-9636-ff6401ff6c59';
    $pane = new stdClass();
    $pane->pid = 'new-1069f9a5-81c9-442d-9c20-e248a77fdddc';
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
      'override_title' => 0,
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
    $pane->uuid = '1069f9a5-81c9-442d-9c20-e248a77fdddc';
    $display->content['new-1069f9a5-81c9-442d-9c20-e248a77fdddc'] = $pane;
    $display->panels['bottom'][1] = 'new-1069f9a5-81c9-442d-9c20-e248a77fdddc';
    $pane = new stdClass();
    $pane->pid = 'new-46974fc3-1847-4786-b0f3-7ae0b8169680';
    $pane->panel = 'bottom';
    $pane->type = 'add_tags';
    $pane->subtype = 'add_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '46974fc3-1847-4786-b0f3-7ae0b8169680';
    $display->content['new-46974fc3-1847-4786-b0f3-7ae0b8169680'] = $pane;
    $display->panels['bottom'][2] = 'new-46974fc3-1847-4786-b0f3-7ae0b8169680';
    $pane = new stdClass();
    $pane->pid = 'new-59e7615e-f3f6-4a2c-9337-98bf2eb31f79';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '59e7615e-f3f6-4a2c-9337-98bf2eb31f79';
    $display->content['new-59e7615e-f3f6-4a2c-9337-98bf2eb31f79'] = $pane;
    $display->panels['main'][0] = 'new-59e7615e-f3f6-4a2c-9337-98bf2eb31f79';
    $pane = new stdClass();
    $pane->pid = 'new-a52a1b99-013a-44e8-81a0-739b9f7d7ad1';
    $pane->panel = 'middle_one';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_resources';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'file_default',
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
    $pane->uuid = 'a52a1b99-013a-44e8-81a0-739b9f7d7ad1';
    $display->content['new-a52a1b99-013a-44e8-81a0-739b9f7d7ad1'] = $pane;
    $display->panels['middle_one'][0] = 'new-a52a1b99-013a-44e8-81a0-739b9f7d7ad1';
    $pane = new stdClass();
    $pane->pid = 'new-cdea1f48-7256-4166-8e90-379cb074357b';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cdea1f48-7256-4166-8e90-379cb074357b';
    $display->content['new-cdea1f48-7256-4166-8e90-379cb074357b'] = $pane;
    $display->panels['middle_one'][1] = 'new-cdea1f48-7256-4166-8e90-379cb074357b';
    $pane = new stdClass();
    $pane->pid = 'new-64eb36cf-a059-4ac5-8f7e-4e8693c78ccc';
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
    $pane->uuid = '64eb36cf-a059-4ac5-8f7e-4e8693c78ccc';
    $display->content['new-64eb36cf-a059-4ac5-8f7e-4e8693c78ccc'] = $pane;
    $display->panels['middle_two'][0] = 'new-64eb36cf-a059-4ac5-8f7e-4e8693c78ccc';
    $pane = new stdClass();
    $pane->pid = 'new-852146f6-27f8-4f55-95eb-b42865b48c92';
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
    $pane->uuid = '852146f6-27f8-4f55-95eb-b42865b48c92';
    $display->content['new-852146f6-27f8-4f55-95eb-b42865b48c92'] = $pane;
    $display->panels['top'][0] = 'new-852146f6-27f8-4f55-95eb-b42865b48c92';
    $pane = new stdClass();
    $pane->pid = 'new-b16d24ce-d86f-4a1d-9cb9-22b2cdaf3ecc';
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
    $pane->uuid = 'b16d24ce-d86f-4a1d-9cb9-22b2cdaf3ecc';
    $display->content['new-b16d24ce-d86f-4a1d-9cb9-22b2cdaf3ecc'] = $pane;
    $display->panels['top'][1] = 'new-b16d24ce-d86f-4a1d-9cb9-22b2cdaf3ecc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Category Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'term-content-category',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              2 => '2',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->title = '%term:name';
  $display->uuid = '8071926c-e549-4c28-b809-2f5376fbad94';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-885d66bb-375d-40b7-bb85-2860aa954d24';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'category_page-category_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '%term:tid',
      ),
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
    $pane->uuid = '885d66bb-375d-40b7-bb85-2860aa954d24';
    $display->content['new-885d66bb-375d-40b7-bb85-2860aa954d24'] = $pane;
    $display->panels['middle'][0] = 'new-885d66bb-375d-40b7-bb85-2860aa954d24';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_3';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Tag Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'term-content-category',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              3 => '3',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->title = '%term:name';
  $display->uuid = 'a1db1d49-42f9-4bcc-ab55-be05b2f6ecef';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f66de014-2869-4a5a-850e-1d849626589a';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'category_page-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '%term:tid',
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
    $pane->uuid = 'f66de014-2869-4a5a-850e-1d849626589a';
    $display->content['new-f66de014-2869-4a5a-850e-1d849626589a'] = $pane;
    $display->panels['middle'][0] = 'new-f66de014-2869-4a5a-850e-1d849626589a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_3'] = $handler;

  return $export;
}
