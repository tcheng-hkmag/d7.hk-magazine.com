<?php
/**
 * @file
 * hkmag_column_name.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hkmag_column_name_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hkmag_column_name_node_info() {
  $items = array(
    'column_name' => array(
      'name' => t('Column Name'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
