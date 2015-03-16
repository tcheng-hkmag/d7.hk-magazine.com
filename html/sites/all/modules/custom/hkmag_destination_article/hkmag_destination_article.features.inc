<?php
/**
 * @file
 * hkmag_destination_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hkmag_destination_article_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hkmag_destination_article_node_info() {
  $items = array(
    'destination_article' => array(
      'name' => t('Destination Article'),
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
