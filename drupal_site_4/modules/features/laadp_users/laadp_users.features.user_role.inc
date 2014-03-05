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

  // Exported role: LAADP Editor.
  $roles['LAADP Editor'] = array(
    'name' => 'LAADP Editor',
    'weight' => '2',
  );
  
  $roles['LAADP Admin'] = array(
  		'name' => 'LAADP Admin',
  		'weight' => '3',
  );

  return $roles;
}
