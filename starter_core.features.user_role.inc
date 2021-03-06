<?php
/**
 * @file
 * starter_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function starter_core_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 10,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 11,
  );

  return $roles;
}
