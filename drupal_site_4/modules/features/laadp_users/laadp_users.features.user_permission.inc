<?php
/**
 * @file
 * laadp_users.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function laadp_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: access admin theme.
  $permissions['access admin theme'] = array(
    'name' => 'access admin theme',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'admin_theme',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'system',
  );

  // Exported permission: access backup and migrate.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access backup files.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access bean overview.
  $permissions['access bean overview'] = array(
    'name' => 'access bean overview',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access dashboard.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(),
    'module' => 'dashboard',
  );

  // Exported permission: access navbar.
  $permissions['access navbar'] = array(
    'name' => 'access navbar',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'navbar',
  );

  // Exported permission: access proxy router.
  $permissions['access proxy router'] = array(
    'name' => 'access proxy router',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'proxy',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'system',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer backup and migrate.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: administer bean settings.
  $permissions['administer bean settings'] = array(
    'name' => 'administer bean settings',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: administer bean types.
  $permissions['administer bean types'] = array(
    'name' => 'administer bean types',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: administer beans.
  $permissions['administer beans'] = array(
    'name' => 'administer beans',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(),
    'module' => 'block',
  );

  // Exported permission: administer ckeditor.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(),
    'module' => 'ckeditor',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: administer facets.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(),
    'module' => 'facetapi',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: administer feeds.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: administer feeds_tamper.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: administer fieldgroups.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(),
    'module' => 'field_group',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(),
    'module' => 'image',
  );

  // Exported permission: administer linkit.
  $permissions['administer linkit'] = array(
    'name' => 'administer linkit',
    'roles' => array(),
    'module' => 'linkit',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(),
    'module' => 'menu',
  );

  // Exported permission: administer mini panels.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(),
    'module' => 'panels_mini',
  );

  // Exported permission: administer module filter.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(),
    'module' => 'module_filter',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: administer proxy.
  $permissions['administer proxy'] = array(
    'name' => 'administer proxy',
    'roles' => array(),
    'module' => 'proxy',
  );

  // Exported permission: administer shortcuts.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer system menus.
  $permissions['administer system menus'] = array(
    'name' => 'administer system menus',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'content_menu',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'user',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'system',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: clear laadp_catalog_items feeds.
  $permissions['clear laadp_catalog_items feeds'] = array(
    'name' => 'clear laadp_catalog_items feeds',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: create any footer bean.
  $permissions['create any footer bean'] = array(
    'name' => 'create any footer bean',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: create catalog_item content.
  $permissions['create catalog_item content'] = array(
    'name' => 'create catalog_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create mini panels.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(),
    'module' => 'panels_mini',
  );

  // Exported permission: create standard_content content.
  $permissions['create standard_content content'] = array(
    'name' => 'create standard_content content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(),
    'module' => 'path',
  );

  // Exported permission: customize ckeditor.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(),
    'module' => 'ckeditor',
  );

  // Exported permission: customize shortcut links.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(),
    'module' => 'shortcut',
  );

  // Exported permission: delete any catalog_item content.
  $permissions['delete any catalog_item content'] = array(
    'name' => 'delete any catalog_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any footer bean.
  $permissions['delete any footer bean'] = array(
    'name' => 'delete any footer bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: delete any standard_content content.
  $permissions['delete any standard_content content'] = array(
    'name' => 'delete any standard_content content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete backup files.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: delete own catalog_item content.
  $permissions['delete own catalog_item content'] = array(
    'name' => 'delete own catalog_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own standard_content content.
  $permissions['delete own standard_content content'] = array(
    'name' => 'delete own standard_content content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 3.
  $permissions['delete terms in 3'] = array(
    'name' => 'delete terms in 3',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any catalog_item content.
  $permissions['edit any catalog_item content'] = array(
    'name' => 'edit any catalog_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any footer bean.
  $permissions['edit any footer bean'] = array(
    'name' => 'edit any footer bean',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: edit any standard_content content.
  $permissions['edit any standard_content content'] = array(
    'name' => 'edit any standard_content content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit bean view mode.
  $permissions['edit bean view mode'] = array(
    'name' => 'edit bean view mode',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: edit own catalog_item content.
  $permissions['edit own catalog_item content'] = array(
    'name' => 'edit own catalog_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own standard_content content.
  $permissions['edit own standard_content content'] = array(
    'name' => 'edit own standard_content content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 3.
  $permissions['edit terms in 3'] = array(
    'name' => 'edit terms in 3',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: import laadp_catalog_items feeds.
  $permissions['import laadp_catalog_items feeds'] = array(
    'name' => 'import laadp_catalog_items feeds',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: perform backup.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: reset cache via router.
  $permissions['reset cache via router'] = array(
    'name' => 'reset cache via router',
    'roles' => array(),
    'module' => 'proxy',
  );

  // Exported permission: restore from backup.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: switch shortcut sets.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(),
    'module' => 'shortcut',
  );

  // Exported permission: tamper laadp_catalog_items.
  $permissions['tamper laadp_catalog_items'] = array(
    'name' => 'tamper laadp_catalog_items',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: unlock laadp_catalog_items feeds.
  $permissions['unlock laadp_catalog_items feeds'] = array(
    'name' => 'unlock laadp_catalog_items feeds',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: use text format laadp_format.
  $permissions['use text format laadp_format'] = array(
    'name' => 'use text format laadp_format',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: view any footer bean.
  $permissions['view any footer bean'] = array(
    'name' => 'view any footer bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: view bean page.
  $permissions['view bean page'] = array(
    'name' => 'view bean page',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: view bean revisions.
  $permissions['view bean revisions'] = array(
    'name' => 'view bean revisions',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'LAADP Editor' => 'LAADP Editor',
    ),
    'module' => 'system',
  );

  return $permissions;
}
