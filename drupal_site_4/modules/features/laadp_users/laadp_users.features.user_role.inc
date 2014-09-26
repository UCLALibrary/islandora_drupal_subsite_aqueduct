<?php
/**
 * @file
 * laadp_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function laadp_users_user_default_roles() {
  $roles = array();

  // Exported role: LAADP Administrator.
  $roles['LAADP Administrator'] = array(
    'name' => 'LAADP Administrator',
    'weight' => 3,
  );

  // Exported role: LAADP Contributor.
  $roles['LAADP Contributor'] = array(
    'name' => 'LAADP Contributor',
    'weight' => 4,
  );

  // Exported role: LAADP Editor.
  $roles['LAADP Editor'] = array(
    'name' => 'LAADP Editor',
    'weight' => 2,
  );

  return $roles;
}
