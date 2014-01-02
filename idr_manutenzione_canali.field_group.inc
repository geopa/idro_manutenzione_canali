<?php
/**
 * @file
 * idr_manutenzione_canali.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function idr_manutenzione_canali_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_allegati|node|manutenzione_canali|default';
  $field_group->group_name = 'group_allegati';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'manutenzione_canali';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_canali';
  $field_group->data = array(
    'label' => 'Allegati',
    'weight' => '14',
    'children' => array(
      0 => 'field_idr_foto',
      1 => 'field_idr_scheda',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-allegati field-group-tab',
      ),
    ),
  );
  $export['group_allegati|node|manutenzione_canali|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_allegati|node|manutenzione_canali|form';
  $field_group->group_name = 'group_allegati';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'manutenzione_canali';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_canali';
  $field_group->data = array(
    'label' => '4 - Aggiungi Allegati',
    'weight' => '13',
    'children' => array(
      0 => 'field_idr_foto',
      1 => 'field_idr_scheda',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => '4 - Aggiungi Allegati',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-allegati field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_allegati|node|manutenzione_canali|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_canali|node|manutenzione_canali|default';
  $field_group->group_name = 'group_canali';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'manutenzione_canali';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Manutenzione Canali',
    'weight' => '0',
    'children' => array(
      0 => 'group_mappa',
      1 => 'group_stato',
      2 => 'group_allegati',
      3 => 'group_manutenzione',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-canali field-group-tabs',
      ),
    ),
  );
  $export['group_canali|node|manutenzione_canali|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_canali|node|manutenzione_canali|form';
  $field_group->group_name = 'group_canali';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'manutenzione_canali';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Gestione Canali',
    'weight' => '0',
    'children' => array(
      0 => 'group_informazioni',
      1 => 'group_mappa',
      2 => 'group_manutenzione',
      3 => 'group_allegati',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-canali field-group-tabs',
      ),
    ),
  );
  $export['group_canali|node|manutenzione_canali|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_informazioni|node|manutenzione_canali|form';
  $field_group->group_name = 'group_informazioni';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'manutenzione_canali';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_canali';
  $field_group->data = array(
    'label' => '1 - informazioni Generali',
    'weight' => '10',
    'children' => array(
      0 => 'field_idr_nome',
      1 => 'field_idr_stato',
      2 => 'field_idr_tipo',
      3 => 'title',
      4 => 'path',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => '1 - informazioni Generali',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-informazioni field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_informazioni|node|manutenzione_canali|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_manutenzione|node|manutenzione_canali|default';
  $field_group->group_name = 'group_manutenzione';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'manutenzione_canali';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_canali';
  $field_group->data = array(
    'label' => 'manutenzione',
    'weight' => '12',
    'children' => array(
      0 => 'field_idr_durata_int',
      1 => 'field_idr_manutenzione',
      2 => 'field_idr_tipo_manutenzione',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-manutenzione field-group-tab',
      ),
    ),
  );
  $export['group_manutenzione|node|manutenzione_canali|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_manutenzione|node|manutenzione_canali|form';
  $field_group->group_name = 'group_manutenzione';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'manutenzione_canali';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_canali';
  $field_group->data = array(
    'label' => '2 - Manutenzioni',
    'weight' => '11',
    'children' => array(
      0 => 'field_idr_durata_int',
      1 => 'field_idr_manutenzione',
      2 => 'field_idr_tipo_manutenzione',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => '2 - Manutenzioni',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-manutenzione field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_manutenzione|node|manutenzione_canali|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mappa|node|manutenzione_canali|default';
  $field_group->group_name = 'group_mappa';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'manutenzione_canali';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_canali';
  $field_group->data = array(
    'label' => 'Mappa',
    'weight' => '13',
    'children' => array(
      0 => 'field_idro_geometria',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-mappa field-group-tab',
      ),
    ),
  );
  $export['group_mappa|node|manutenzione_canali|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mappa|node|manutenzione_canali|form';
  $field_group->group_name = 'group_mappa';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'manutenzione_canali';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_canali';
  $field_group->data = array(
    'label' => '3 - Disegna in mappa',
    'weight' => '12',
    'children' => array(
      0 => 'field_idro_geometria',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => '3 - Disegna in mappa',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-mappa field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_mappa|node|manutenzione_canali|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stato|node|manutenzione_canali|default';
  $field_group->group_name = 'group_stato';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'manutenzione_canali';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_canali';
  $field_group->data = array(
    'label' => 'informazioni',
    'weight' => '11',
    'children' => array(
      0 => 'field_idr_nome',
      1 => 'field_idr_stato',
      2 => 'field_idr_tipo',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_stato|node|manutenzione_canali|default'] = $field_group;

  return $export;
}
