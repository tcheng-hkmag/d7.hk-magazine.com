<?php
/**
 * @file
 * hkmag_column_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hkmag_column_article_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hkmag_column_article_node_info() {
  $items = array(
    'column_article' => array(
      'name' => t('Column Article'),
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
