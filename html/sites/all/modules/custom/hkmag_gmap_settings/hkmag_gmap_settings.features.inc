<?php
/**
 * @file
 * hkmag_gmap_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hkmag_gmap_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
