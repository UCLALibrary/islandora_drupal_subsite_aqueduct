<?php
/**
 * @file
 * laadp_users.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function laadp_users_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'User',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
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
  $display->title = '%user:field_profile_name';
  $display->uuid = '39d84d73-cf63-45eb-8eb9-e6ee1a42b7fe';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9795a911-42c1-43c8-891b-a0da1248314b';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_profile_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'category_page_thumbnail',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:user_1',
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
    $pane->uuid = '9795a911-42c1-43c8-891b-a0da1248314b';
    $display->content['new-9795a911-42c1-43c8-891b-a0da1248314b'] = $pane;
    $display->panels['middle'][0] = 'new-9795a911-42c1-43c8-891b-a0da1248314b';
    $pane = new stdClass();
    $pane->pid = 'new-ab07b81e-eb0f-43ce-9cf0-ef96dd54a8b0';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => '',
            'php' => 'if (empty($contexts[\'argument_entity_id:user_1\']->data->field_profile_credentials)) return TRUE;',
          ),
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Name, Credentials',
      'title' => '',
      'body' => '<p>%user:field_profile_name, %user:field_profile_credentials</p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-user-field-profile-name',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ab07b81e-eb0f-43ce-9cf0-ef96dd54a8b0';
    $display->content['new-ab07b81e-eb0f-43ce-9cf0-ef96dd54a8b0'] = $pane;
    $display->panels['middle'][1] = 'new-ab07b81e-eb0f-43ce-9cf0-ef96dd54a8b0';
    $pane = new stdClass();
    $pane->pid = 'new-57421801-b191-4319-b8d5-40f3c237f043';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => '',
            'php' => 'if (empty($contexts[\'argument_entity_id:user_1\']->data->field_profile_credentials)) return TRUE;',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Name',
      'title' => '',
      'body' => '%user:field_profile_name',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-user-field-profile-name',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '57421801-b191-4319-b8d5-40f3c237f043';
    $display->content['new-57421801-b191-4319-b8d5-40f3c237f043'] = $pane;
    $display->panels['middle'][2] = 'new-57421801-b191-4319-b8d5-40f3c237f043';
    $pane = new stdClass();
    $pane->pid = 'new-9ad2df28-f406-43f0-bdcc-9b32bc0ee8db';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_profile_short_bio';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9ad2df28-f406-43f0-bdcc-9b32bc0ee8db';
    $display->content['new-9ad2df28-f406-43f0-bdcc-9b32bc0ee8db'] = $pane;
    $display->panels['middle'][3] = 'new-9ad2df28-f406-43f0-bdcc-9b32bc0ee8db';
    $pane = new stdClass();
    $pane->pid = 'new-6f6f63e5-af72-4946-958e-a05de9140230';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'bookmarked_catalog_items';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
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
      'override_title_text' => 'Items flagged by %user:field_profile_name',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '6f6f63e5-af72-4946-958e-a05de9140230';
    $display->content['new-6f6f63e5-af72-4946-958e-a05de9140230'] = $pane;
    $display->panels['middle'][4] = 'new-6f6f63e5-af72-4946-958e-a05de9140230';
    $pane = new stdClass();
    $pane->pid = 'new-c59ea193-82a1-4753-8beb-2689b0facf81';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Add a story item',
      'title' => '',
      'body' => '<p><a href="/node/add/story">Add a story item</a></p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'add-story-item',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'c59ea193-82a1-4753-8beb-2689b0facf81';
    $display->content['new-c59ea193-82a1-4753-8beb-2689b0facf81'] = $pane;
    $display->panels['middle'][5] = 'new-c59ea193-82a1-4753-8beb-2689b0facf81';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context'] = $handler;

  return $export;
}
