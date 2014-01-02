<?php
/**
 * @file
 * idr_manutenzione_canali.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function idr_manutenzione_canali_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_manutenzione_canali';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_manutenzione_canali'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_manutenzione_canali';
  $strongarm->value = '[node:field-idr-tipo] - [node:field_idr_nome]';
  $export['auto_entitylabel_pattern_node_manutenzione_canali'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_manutenzione_canali';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_manutenzione_canali'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__manutenzione_canali';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '14',
        ),
        'path' => array(
          'weight' => '18',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__manutenzione_canali'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_manutenzione_canali';
  $strongarm->value = '0';
  $export['language_content_type_manutenzione_canali'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_manutenzione_canali';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_manutenzione_canali'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_manutenzione_canali';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_manutenzione_canali'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_manutenzione_canali';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_manutenzione_canali'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_manutenzione_canali';
  $strongarm->value = '1';
  $export['node_preview_manutenzione_canali'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_manutenzione_canali';
  $strongarm->value = 0;
  $export['node_submitted_manutenzione_canali'] = $strongarm;

  return $export;
}
