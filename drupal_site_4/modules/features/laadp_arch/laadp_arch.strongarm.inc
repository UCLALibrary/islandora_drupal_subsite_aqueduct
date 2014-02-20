<?php
/**
 * @file
 * laadp_arch.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function laadp_arch_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_laadp_long';
  $strongarm->value = 'l, F jS, Y';
  $export['date_format_laadp_long'] = $strongarm;

  return $export;
}
