<?php
/**
 * @file
 * hkmag_hotel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hkmag_hotel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hkmag_hotel_node_info() {
  $items = array(
    'hotel' => array(
      'name' => t('Hotel'),
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
