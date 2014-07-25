<?php
/**
 * @file
 * mountbatten_spam_protection.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mountbatten_spam_protection_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'botcha_enabled_contact_site_form';
  $strongarm->value = 1;
  $export['botcha_enabled_contact_site_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'botcha_enabled_user_pass';
  $strongarm->value = 1;
  $export['botcha_enabled_user_pass'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'botcha_enabled_user_register_form';
  $strongarm->value = 1;
  $export['botcha_enabled_user_register_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'botcha_secret';
  $strongarm->value = 'fe240eab062082e2fe4ec3ffe42c023d';
  $export['botcha_secret'] = $strongarm;

  return $export;
}
