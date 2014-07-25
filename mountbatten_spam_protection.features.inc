<?php
/**
 * @file
 * mountbatten_spam_protection.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mountbatten_spam_protection_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
