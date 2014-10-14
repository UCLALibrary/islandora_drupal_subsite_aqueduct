<?php
/**
 * @file
 * laadp_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function laadp_search_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__subjects';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Subject',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'search?f[0]=field_subject:%term:tid',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:taxonomy_term',
          'settings' => array(
            'type' => array(
              'subjects' => 'subjects',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['term_view__subjects'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function laadp_search_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'catalog_browser';
  $page->task = 'page';
  $page->admin_title = 'Catalog Item Browser';
  $page->admin_description = '';
  $page->path = 'browse';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_catalog_browser_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'catalog_browser';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
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
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'above_one' => NULL,
      'above_two' => NULL,
      'main' => NULL,
      'middle_one' => NULL,
      'middle_two' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6d7e6126-a4c3-4766-8bea-446353513981';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b06a4be2-27f7-457b-b116-f4a219807c47';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'subject_browse-catalog_browse_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Subjects',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b06a4be2-27f7-457b-b116-f4a219807c47';
    $display->content['new-b06a4be2-27f7-457b-b116-f4a219807c47'] = $pane;
    $display->panels['left'][0] = 'new-b06a4be2-27f7-457b-b116-f4a219807c47';
    $pane = new stdClass();
    $pane->pid = 'new-c5d128ca-af79-4966-b83b-c391e5620a5d';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-HqaeQBI5mLDpJpXNDoVO6Qz1I014gYWt';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Narrow your search',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c5d128ca-af79-4966-b83b-c391e5620a5d';
    $display->content['new-c5d128ca-af79-4966-b83b-c391e5620a5d'] = $pane;
    $display->panels['right'][0] = 'new-c5d128ca-af79-4966-b83b-c391e5620a5d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b06a4be2-27f7-457b-b116-f4a219807c47';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['catalog_browser'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_solr';
  $page->task = 'page';
  $page->admin_title = 'Search Solr';
  $page->admin_description = '';
  $page->path = 'search';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_solr_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'search_solr';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Search',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'View: Search Solr: Search Context',
        'keyword' => 'view',
        'name' => 'view:search_solr-search_solr_context',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Search';
  $display->uuid = '19d9f6bf-5334-4816-9715-6eff2925770d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0be72a00-a647-472a-a89f-ecce1ab166ed';
    $pane->panel = 'left';
    $pane->type = 'laadp_search_serachapi_block';
    $pane->subtype = 'laadp_search_serachapi_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '0be72a00-a647-472a-a89f-ecce1ab166ed';
    $display->content['new-0be72a00-a647-472a-a89f-ecce1ab166ed'] = $pane;
    $display->panels['left'][0] = 'new-0be72a00-a647-472a-a89f-ecce1ab166ed';
    $pane = new stdClass();
    $pane->pid = 'new-4f83b5ec-9294-43bd-bcae-06c368d2e0b0';
    $pane->panel = 'left';
    $pane->type = 'views_row';
    $pane->subtype = 'views_row';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'rows' => array(),
      'use_fields' => 0,
      'fields' => array(),
      'context' => 'context_view:search_solr-search_solr_context_1',
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
    $pane->uuid = '4f83b5ec-9294-43bd-bcae-06c368d2e0b0';
    $display->content['new-4f83b5ec-9294-43bd-bcae-06c368d2e0b0'] = $pane;
    $display->panels['left'][1] = 'new-4f83b5ec-9294-43bd-bcae-06c368d2e0b0';
    $pane = new stdClass();
    $pane->pid = 'new-4a1b9386-311a-4ce9-bd2a-fe9bf4ceacce';
    $pane->panel = 'left';
    $pane->type = 'views_empty';
    $pane->subtype = 'views_empty';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:search_solr-search_solr_context_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4a1b9386-311a-4ce9-bd2a-fe9bf4ceacce';
    $display->content['new-4a1b9386-311a-4ce9-bd2a-fe9bf4ceacce'] = $pane;
    $display->panels['left'][2] = 'new-4a1b9386-311a-4ce9-bd2a-fe9bf4ceacce';
    $pane = new stdClass();
    $pane->pid = 'new-f64d178c-b120-482f-8cd9-d7a441fc8e23';
    $pane->panel = 'left';
    $pane->type = 'views_pager';
    $pane->subtype = 'views_pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:search_solr-search_solr_context_1',
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
    $pane->uuid = 'f64d178c-b120-482f-8cd9-d7a441fc8e23';
    $display->content['new-f64d178c-b120-482f-8cd9-d7a441fc8e23'] = $pane;
    $display->panels['left'][3] = 'new-f64d178c-b120-482f-8cd9-d7a441fc8e23';
    $pane = new stdClass();
    $pane->pid = 'new-4fad3e37-e4cb-437e-b2c8-5347a4ec7cc4';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Narrow your Search',
      'title' => '',
      'body' => '<h3>Narrow your Search</h3>',
      'format' => 'laadp_format',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4fad3e37-e4cb-437e-b2c8-5347a4ec7cc4';
    $display->content['new-4fad3e37-e4cb-437e-b2c8-5347a4ec7cc4'] = $pane;
    $display->panels['right'][0] = 'new-4fad3e37-e4cb-437e-b2c8-5347a4ec7cc4';
    $pane = new stdClass();
    $pane->pid = 'new-7db0868b-01be-4e55-92f4-17e499670897';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-vGfI3NxNZRql9BxioDLN0fzR5HjNKHtC';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Kinds of Content',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7db0868b-01be-4e55-92f4-17e499670897';
    $display->content['new-7db0868b-01be-4e55-92f4-17e499670897'] = $pane;
    $display->panels['right'][1] = 'new-7db0868b-01be-4e55-92f4-17e499670897';
    $pane = new stdClass();
    $pane->pid = 'new-00268e47-2c2a-4770-b85a-da203f2aec55';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-HqaeQBI5mLDpJpXNDoVO6Qz1I014gYWt';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Subject',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '00268e47-2c2a-4770-b85a-da203f2aec55';
    $display->content['new-00268e47-2c2a-4770-b85a-da203f2aec55'] = $pane;
    $display->panels['right'][2] = 'new-00268e47-2c2a-4770-b85a-da203f2aec55';
    $pane = new stdClass();
    $pane->pid = 'new-76f4ee4e-9322-42cc-a23e-85a8bf945294';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-hSnBts4Ap4yrSjQu7LKhsVdrHxAjyYKU';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Place',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '76f4ee4e-9322-42cc-a23e-85a8bf945294';
    $display->content['new-76f4ee4e-9322-42cc-a23e-85a8bf945294'] = $pane;
    $display->panels['right'][3] = 'new-76f4ee4e-9322-42cc-a23e-85a8bf945294';
    $pane = new stdClass();
    $pane->pid = 'new-af54bdc4-a498-4ad0-9929-fc7b20fd39cb';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Q2yS1BQwhvZxxF7zaflRpeFLvqJCx7O6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'People',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'af54bdc4-a498-4ad0-9929-fc7b20fd39cb';
    $display->content['new-af54bdc4-a498-4ad0-9929-fc7b20fd39cb'] = $pane;
    $display->panels['right'][4] = 'new-af54bdc4-a498-4ad0-9929-fc7b20fd39cb';
    $pane = new stdClass();
    $pane->pid = 'new-655f28ba-a57b-4556-b3c9-20ee2441d7c0';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-SFjC7xp0ANHub02FlbtckRyZXal7Swtz';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Year',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '655f28ba-a57b-4556-b3c9-20ee2441d7c0';
    $display->content['new-655f28ba-a57b-4556-b3c9-20ee2441d7c0'] = $pane;
    $display->panels['right'][5] = 'new-655f28ba-a57b-4556-b3c9-20ee2441d7c0';
    $pane = new stdClass();
    $pane->pid = 'new-e089d5c3-c0f1-4491-9c20-f4db5351132f';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-78SM10PQAKFjL5PMt3zArpe2XRSVfBDA';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Institution',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'e089d5c3-c0f1-4491-9c20-f4db5351132f';
    $display->content['new-e089d5c3-c0f1-4491-9c20-f4db5351132f'] = $pane;
    $display->panels['right'][6] = 'new-e089d5c3-c0f1-4491-9c20-f4db5351132f';
    $pane = new stdClass();
    $pane->pid = 'new-b890ccd8-01a5-43ad-ac94-6fdf4a9fb1e1';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-W8d2HqB86Fp2ffxYZaUyP3HD6LQD3UdV';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Copyright',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'b890ccd8-01a5-43ad-ac94-6fdf4a9fb1e1';
    $display->content['new-b890ccd8-01a5-43ad-ac94-6fdf4a9fb1e1'] = $pane;
    $display->panels['right'][7] = 'new-b890ccd8-01a5-43ad-ac94-6fdf4a9fb1e1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_solr'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_solr_form';
  $page->task = 'page';
  $page->admin_title = 'Search Solr Form';
  $page->admin_description = '';
  $page->path = 'search-form';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_solr_form_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'search_solr_form';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Search',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'View: Search Solr: Search Context',
        'keyword' => 'view',
        'name' => 'view:search_solr-search_solr_context',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0759e1f8-9e8a-43b2-92fc-ab7fea3b36d4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a38c6aba-18cc-4de7-8bba-96b9d5c7e9e6';
    $pane->panel = 'middle';
    $pane->type = 'views_exposed';
    $pane->subtype = 'views_exposed';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:search_solr-search_solr_context_1',
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
    $pane->uuid = 'a38c6aba-18cc-4de7-8bba-96b9d5c7e9e6';
    $display->content['new-a38c6aba-18cc-4de7-8bba-96b9d5c7e9e6'] = $pane;
    $display->panels['middle'][0] = 'new-a38c6aba-18cc-4de7-8bba-96b9d5c7e9e6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a38c6aba-18cc-4de7-8bba-96b9d5c7e9e6';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_solr_form'] = $page;

  return $pages;

}
