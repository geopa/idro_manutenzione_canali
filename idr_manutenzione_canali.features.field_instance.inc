<?php
/**
 * @file
 * idr_manutenzione_canali.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function idr_manutenzione_canali_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-manutenzione_canali-field_idr_durata_int'
  $field_instances['node-manutenzione_canali-field_idr_durata_int'] = array(
    'bundle' => 'manutenzione_canali',
    'deleted' => 0,
    'description' => 'Inserire la data in cui si prevede un nuovo intervento',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'value2',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'value2',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_idr_durata_int',
    'label' => 'durata intervento',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-manutenzione_canali-field_idr_foto'
  $field_instances['node-manutenzione_canali-field_idr_foto'] = array(
    'bundle' => 'manutenzione_canali',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_idr_foto',
    'label' => 'Foto',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'idr_canali',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '8 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-manutenzione_canali-field_idr_manutenzione'
  $field_instances['node-manutenzione_canali-field_idr_manutenzione'] = array(
    'bundle' => 'manutenzione_canali',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_idr_manutenzione',
    'label' => 'Intervento Manutenzione',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-manutenzione_canali-field_idr_nome'
  $field_instances['node-manutenzione_canali-field_idr_nome'] = array(
    'bundle' => 'manutenzione_canali',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_idr_nome',
    'label' => 'Nome',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 80,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-manutenzione_canali-field_idr_scheda'
  $field_instances['node-manutenzione_canali-field_idr_scheda'] = array(
    'bundle' => 'manutenzione_canali',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_idr_scheda',
    'label' => 'Scheda Intervento',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'idr_canali',
      'file_extensions' => 'doc pdf xls zip jpg tif png',
      'max_filesize' => '20 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-manutenzione_canali-field_idr_stato'
  $field_instances['node-manutenzione_canali-field_idr_stato'] = array(
    'bundle' => 'manutenzione_canali',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_idr_stato',
    'label' => 'Stato',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-manutenzione_canali-field_idr_tipo'
  $field_instances['node-manutenzione_canali-field_idr_tipo'] = array(
    'bundle' => 'manutenzione_canali',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_idr_tipo',
    'label' => 'Tipo',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-manutenzione_canali-field_idr_tipo_manutenzione'
  $field_instances['node-manutenzione_canali-field_idr_tipo_manutenzione'] = array(
    'bundle' => 'manutenzione_canali',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Breve Descrizione sull\'intervento di manutenzione eseguito',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_idr_tipo_manutenzione',
    'label' => 'Tipo Manutenzione',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 8,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-manutenzione_canali-field_idro_geometria'
  $field_instances['node-manutenzione_canali-field_idro_geometria'] = array(
    'bundle' => 'manutenzione_canali',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'postgis',
        'settings' => array(
          'map' => 'mappa_generica_output',
        ),
        'type' => 'openlayers',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'postgis',
        'settings' => array(
          'map' => 'mappa_generica_output',
        ),
        'type' => 'openlayers',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_idro_geometria',
    'label' => 'geometria',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'postgis',
      'settings' => array(
        'behavior' => 'openlayers_behavior_ole',
        'map' => 'disegna_strade_geofield_input',
      ),
      'type' => 'openlayers',
      'weight' => 19,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Breve Descrizione sull\'intervento di manutenzione eseguito');
  t('Foto');
  t('Inserire la data in cui si prevede un nuovo intervento');
  t('Intervento Manutenzione');
  t('Nome');
  t('Scheda Intervento');
  t('Stato');
  t('Tipo');
  t('Tipo Manutenzione');
  t('durata intervento');
  t('geometria');

  return $field_instances;
}
