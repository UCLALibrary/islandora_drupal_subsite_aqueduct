<?php
/**
 * @file
 * Enables modules and site configuration for a minimal site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function drupal_site_4_form_install_configure_form_alter(&$form, $form_state) {

  // Pre-populate the site name with the project name.
  $form['site_information']['site_name']['#default_value'] = "Los Angeles Aqueduct Digital Platform";
  $form['site_information']['site_mail']['#default_value'] = "jenkins@library.ucla.edu";

  // Pre-fill the admin user account.
  $form['admin_account']['account']['name']['#value'] = "admin";
  $form['admin_account']['account']['mail']['#value'] = "jenkins@library.ucla.edu";
  // These have been changed before checking into public repo, but leaving in for historical purposes
  $form['admin_account']['account']['pass']['#value'] = array('pass1' => 'qwepoi123098', 'pass2' => 'qwepoi123098');

  // Server settings.
  $form['server_settings']['site_default_country']['#default_value'] = 'US';

  // Timezone settings.

  $form['server_settings']['date_default_timezone']['#default_value'] = 'America/Los_Angeles';
}

/**
 * Implements hook_install_tasks().
 */
function laadp_install_tasks(&$install_state) {
  $tasks['iul_install_task_install_theme'] = array(
    'display_name' => st('Install theme'),
    'display' => TRUE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_REACHED,
    'function' => 'laadp_install_task_install_theme',
  );
  return $tasks;
}

/**
 * Callback funtion to install and configure themes.
 */
function laadp_install_task_install_theme() {
  // Any themes without keys here will get numeric keys and so will be enabled,
  // but not placed into variables.
  $enable = array(
    'theme_default' => 'numa',
    'admin_theme' => 'seven',
    'omega',
  );
  theme_enable($enable);

  foreach ($enable as $var => $theme) {
    if (!is_numeric($var)) {
      variable_set($var, $theme);
    }
  }

  // Disable the default Bartik theme
  theme_disable(array('bartik'));
}
