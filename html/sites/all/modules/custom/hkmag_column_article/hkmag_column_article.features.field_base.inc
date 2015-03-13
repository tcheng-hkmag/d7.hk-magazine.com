<?php
/**
 * @file
 * hkmag_column_article.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function hkmag_column_article_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_column_name_nr'
  $field_bases['field_column_name_nr'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_column_name_nr',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'art_gallery' => 0,
        'article' => 0,
        'column_article' => 0,
        'column_name' => 'column_name',
        'every_field' => 0,
        'hotel' => 0,
        'page' => 0,
        'webform' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  return $field_bases;
}
