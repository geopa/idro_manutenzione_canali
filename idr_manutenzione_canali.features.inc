<?php
/**
 * @file
 * idr_manutenzione_canali.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function idr_manutenzione_canali_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function idr_manutenzione_canali_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function idr_manutenzione_canali_node_info() {
  $items = array(
    'manutenzione_canali' => array(
      'name' => t('Idr_Manutenzione_Canali'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nome Canale'),
      'help' => '',
    ),
  );
  return $items;
}
