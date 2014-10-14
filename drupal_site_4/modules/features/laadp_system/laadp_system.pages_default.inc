<?php
/**
 * @file
 * laadp_system.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function laadp_system_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'LAADP Template',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => 'home',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega:site';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'branding' => NULL,
      'header' => NULL,
      'highlighted' => NULL,
      'help' => NULL,
      'content' => NULL,
      'footer_first' => NULL,
      'footer_second' => NULL,
      'default' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '08bdde59-e698-4201-9fa0-97c913e81f52';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0c538711-a29d-42fb-8af6-8a9d2cde7cf7';
    $pane->panel = 'branding';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
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
    $pane->uuid = '0c538711-a29d-42fb-8af6-8a9d2cde7cf7';
    $display->content['new-0c538711-a29d-42fb-8af6-8a9d2cde7cf7'] = $pane;
    $display->panels['branding'][0] = 'new-0c538711-a29d-42fb-8af6-8a9d2cde7cf7';
    $pane = new stdClass();
    $pane->pid = 'new-1bcfad79-f2a6-4bfe-b9c6-5112ac97d249';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
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
    $pane->uuid = '1bcfad79-f2a6-4bfe-b9c6-5112ac97d249';
    $display->content['new-1bcfad79-f2a6-4bfe-b9c6-5112ac97d249'] = $pane;
    $display->panels['content'][0] = 'new-1bcfad79-f2a6-4bfe-b9c6-5112ac97d249';
    $pane = new stdClass();
    $pane->pid = 'new-1fa757fc-ca58-4ffb-b42e-08ec9fa7986e';
    $pane->panel = 'footer_first';
    $pane->type = 'block';
    $pane->subtype = 'bean-footer-about';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '1fa757fc-ca58-4ffb-b42e-08ec9fa7986e';
    $display->content['new-1fa757fc-ca58-4ffb-b42e-08ec9fa7986e'] = $pane;
    $display->panels['footer_first'][0] = 'new-1fa757fc-ca58-4ffb-b42e-08ec9fa7986e';
    $pane = new stdClass();
    $pane->pid = 'new-fa815f4d-85fc-4cdd-a3b1-d6174787f26c';
    $pane->panel = 'footer_second';
    $pane->type = 'block';
    $pane->subtype = 'bean-footer-links';
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
    $pane->uuid = 'fa815f4d-85fc-4cdd-a3b1-d6174787f26c';
    $display->content['new-fa815f4d-85fc-4cdd-a3b1-d6174787f26c'] = $pane;
    $display->panels['footer_second'][0] = 'new-fa815f4d-85fc-4cdd-a3b1-d6174787f26c';
    $pane = new stdClass();
    $pane->pid = 'new-617346aa-a2b4-4963-8f06-eea0eaad1915';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
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
    $pane->uuid = '617346aa-a2b4-4963-8f06-eea0eaad1915';
    $display->content['new-617346aa-a2b4-4963-8f06-eea0eaad1915'] = $pane;
    $display->panels['header'][0] = 'new-617346aa-a2b4-4963-8f06-eea0eaad1915';
    $pane = new stdClass();
    $pane->pid = 'new-a45a2ade-3661-41a9-8e84-09e5efafea76';
    $pane->panel = 'help';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
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
    $pane->uuid = 'a45a2ade-3661-41a9-8e84-09e5efafea76';
    $display->content['new-a45a2ade-3661-41a9-8e84-09e5efafea76'] = $pane;
    $display->panels['help'][0] = 'new-a45a2ade-3661-41a9-8e84-09e5efafea76';
    $pane = new stdClass();
    $pane->pid = 'new-850ff1b5-444b-4fee-99b3-d3b790ebcab3';
    $pane->panel = 'help';
    $pane->type = 'page_help';
    $pane->subtype = 'page_help';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '850ff1b5-444b-4fee-99b3-d3b790ebcab3';
    $display->content['new-850ff1b5-444b-4fee-99b3-d3b790ebcab3'] = $pane;
    $display->panels['help'][1] = 'new-850ff1b5-444b-4fee-99b3-d3b790ebcab3';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-1bcfad79-f2a6-4bfe-b9c6-5112ac97d249';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_3';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Home',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'home',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega:site';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'branding' => NULL,
      'header' => NULL,
      'highlighted' => NULL,
      'help' => NULL,
      'content' => NULL,
      'footer_first' => NULL,
      'footer_second' => NULL,
      'default' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '66d2c75e-4f3b-43af-a900-5fb52028b3d6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b5094366-c4bc-4174-810f-e9e118c28b4f';
    $pane->panel = 'branding';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
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
    $pane->uuid = 'b5094366-c4bc-4174-810f-e9e118c28b4f';
    $display->content['new-b5094366-c4bc-4174-810f-e9e118c28b4f'] = $pane;
    $display->panels['branding'][0] = 'new-b5094366-c4bc-4174-810f-e9e118c28b4f';
    $pane = new stdClass();
    $pane->pid = 'new-64cb0bf7-7c73-4c5e-83a2-0610bf21d525';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
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
    $pane->uuid = '64cb0bf7-7c73-4c5e-83a2-0610bf21d525';
    $display->content['new-64cb0bf7-7c73-4c5e-83a2-0610bf21d525'] = $pane;
    $display->panels['content'][0] = 'new-64cb0bf7-7c73-4c5e-83a2-0610bf21d525';
    $pane = new stdClass();
    $pane->pid = 'new-787e3966-668b-46bb-9bd9-804f3942d2b5';
    $pane->panel = 'footer_first';
    $pane->type = 'block';
    $pane->subtype = 'bean-footer-about';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '787e3966-668b-46bb-9bd9-804f3942d2b5';
    $display->content['new-787e3966-668b-46bb-9bd9-804f3942d2b5'] = $pane;
    $display->panels['footer_first'][0] = 'new-787e3966-668b-46bb-9bd9-804f3942d2b5';
    $pane = new stdClass();
    $pane->pid = 'new-ee22d389-a9c1-4402-81db-34de3083d956';
    $pane->panel = 'footer_second';
    $pane->type = 'block';
    $pane->subtype = 'bean-footer-links';
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
    $pane->uuid = 'ee22d389-a9c1-4402-81db-34de3083d956';
    $display->content['new-ee22d389-a9c1-4402-81db-34de3083d956'] = $pane;
    $display->panels['footer_second'][0] = 'new-ee22d389-a9c1-4402-81db-34de3083d956';
    $pane = new stdClass();
    $pane->pid = 'new-a840422b-da6f-4548-823a-c4cd2d20a25f';
    $pane->panel = 'help';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
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
    $pane->uuid = 'a840422b-da6f-4548-823a-c4cd2d20a25f';
    $display->content['new-a840422b-da6f-4548-823a-c4cd2d20a25f'] = $pane;
    $display->panels['help'][0] = 'new-a840422b-da6f-4548-823a-c4cd2d20a25f';
    $pane = new stdClass();
    $pane->pid = 'new-0070eb21-4f3f-4338-a51b-6b625485754e';
    $pane->panel = 'help';
    $pane->type = 'page_help';
    $pane->subtype = 'page_help';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0070eb21-4f3f-4338-a51b-6b625485754e';
    $display->content['new-0070eb21-4f3f-4338-a51b-6b625485754e'] = $pane;
    $display->panels['help'][1] = 'new-0070eb21-4f3f-4338-a51b-6b625485754e';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-64cb0bf7-7c73-4c5e-83a2-0610bf21d525';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_3'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function laadp_system_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = 'The Homepage for the LAADP site.';
  $page->path = 'home';
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
  $handler->name = 'page_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
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
  $display->uuid = 'aea1b77d-e23d-45f3-a3e0-5f7b49211f85';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-06d3e52b-d00d-4e9d-a2ed-938ab2e3d48b';
    $pane->panel = 'middle';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => 0,
      'expanded' => 0,
      'sort' => 0,
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
    $pane->uuid = '06d3e52b-d00d-4e9d-a2ed-938ab2e3d48b';
    $display->content['new-06d3e52b-d00d-4e9d-a2ed-938ab2e3d48b'] = $pane;
    $display->panels['middle'][0] = 'new-06d3e52b-d00d-4e9d-a2ed-938ab2e3d48b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
