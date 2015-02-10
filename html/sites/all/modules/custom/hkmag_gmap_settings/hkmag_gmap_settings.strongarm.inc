<?php
/**
 * @file
 * hkmag_gmap_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hkmag_gmap_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gmap_api_key';
  $strongarm->value = 'AIzaSyC4GNGcnAaTWC2htLVGGDVP55PYOMo3A-8';
  $export['gmap_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gmap_default';
  $strongarm->value = array(
    'width' => '500px',
    'height' => '300px',
    'latlong' => '22.350282337045126,114.12511825561523',
    'zoom' => '10',
    'maxzoom' => '14',
    'styles' => array(
      'line_default' => array(
        0 => '0000ff',
        1 => '5',
        2 => '45',
        3 => '',
        4 => '',
      ),
      'poly_default' => array(
        0 => '000000',
        1 => '3',
        2 => '25',
        3 => 'ff0000',
        4 => '45',
      ),
      'highlight_color' => 'ff0000',
    ),
    'controltype' => 'Small',
    'pancontrol' => 1,
    'streetviewcontrol' => 0,
    'mtc' => 'standard',
    'maptype' => 'Map',
    'baselayers' => array(
      'Map' => 1,
      'Satellite' => 1,
      'Hybrid' => 1,
      'Physical' => 0,
    ),
    'behavior' => array(
      'locpick' => FALSE,
      'nodrag' => 0,
      'nokeyboard' => 1,
      'nomousezoom' => 0,
      'nocontzoom' => 0,
      'autozoom' => 0,
      'dynmarkers' => 0,
      'overview' => 0,
      'collapsehack' => 0,
      'scale' => 0,
      'extramarkerevents' => FALSE,
      'clickableshapes' => FALSE,
      'highlight' => 0,
    ),
    'markermode' => '0',
    'line_colors' => array(
      0 => '#00cc00',
      1 => '#ff0000',
      2 => '#0000ff',
    ),
  );
  $export['gmap_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gmap_markermanager';
  $strongarm->value = array(
    'markermanager' => array(
      'filename' => 'markermanager_packed.js',
      'borderPadding' => '256',
      'maxZoom' => '4',
      'trackMarkers' => 0,
      'markerMinZoom' => '4',
      'markerMaxZoom' => '0',
    ),
    'markerclusterer' => array(
      'filename' => 'markerclusterer_packed.js',
      'gridSize' => 60,
      'maxZoom' => 17,
      'styles' => array(),
    ),
    'clusterer' => array(
      'filename' => 'Clusterer2.js',
      'marker' => 'cluster',
      'max_nocluster' => '150',
      'cluster_min' => '5',
      'max_lines' => '10',
      'popup_mode' => 'orig',
    ),
    'clustermarker' => array(
      'filename' => 'ClusterMarker.js',
      'borderPadding' => '256',
      'clusteringEnabled' => 1,
      'clusterMarkerIcon' => '',
      'clusterMarkerTitle' => '',
      'fitMapMaxZoom' => '0',
      'intersectPadding' => '0',
    ),
  );
  $export['gmap_markermanager'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gmap_marker_custom_dir';
  $strongarm->value = 'no value';
  $export['gmap_marker_custom_dir'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gmap_marker_file';
  $strongarm->value = '43933';
  $export['gmap_marker_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gmap_mm_type';
  $strongarm->value = 'gmap';
  $export['gmap_mm_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_default_country';
  $strongarm->value = 'hk';
  $export['location_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_display_location';
  $strongarm->value = '1';
  $export['location_display_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_google_apikey';
  $strongarm->value = 'AIzaSyC4GNGcnAaTWC2htLVGGDVP55PYOMo3A-8';
  $export['location_geocode_google_apikey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_google_delay';
  $strongarm->value = '0';
  $export['location_geocode_google_delay'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_hk_google_accuracy_code';
  $strongarm->value = '8';
  $export['location_geocode_hk_google_accuracy_code'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_mo_google_accuracy_code';
  $strongarm->value = '8';
  $export['location_geocode_mo_google_accuracy_code'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_jit_geocoding';
  $strongarm->value = 0;
  $export['location_jit_geocoding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_locpick_macro';
  $strongarm->value = '[gmap]';
  $export['location_locpick_macro'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maplink_external';
  $strongarm->value = 1;
  $export['location_maplink_external'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maplink_external_method';
  $strongarm->value = 'target="_blank"';
  $export['location_maplink_external_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_usegmap';
  $strongarm->value = 1;
  $export['location_usegmap'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_use_province_abbreviation';
  $strongarm->value = '1';
  $export['location_use_province_abbreviation'] = $strongarm;

  return $export;
}
