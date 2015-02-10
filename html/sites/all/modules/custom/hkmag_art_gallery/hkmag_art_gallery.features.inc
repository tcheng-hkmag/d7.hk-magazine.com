<?php
/**
 * @file
 * hkmag_art_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hkmag_art_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hkmag_art_gallery_node_info() {
  $items = array(
    'art_gallery' => array(
      'name' => t('Art Gallery'),
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
