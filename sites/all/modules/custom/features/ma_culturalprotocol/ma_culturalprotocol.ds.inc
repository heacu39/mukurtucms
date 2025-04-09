<?php

/**
 * @file
 * ma_culturalprotocol.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ma_culturalprotocol_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|cultural_protocol_group|browse_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'cultural_protocol_group';
  $ds_fieldsetting->view_mode = 'browse_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'format' => 'default',
      'formatter_settings' => array(
        'class' => '',
        'link' => '1',
        'wrapper' => 'h2',
      ),
      'label' => 'hidden',
      'weight' => '1',
    ),
  );
  $export['node|cultural_protocol_group|browse_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|cultural_protocol_group|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'cultural_protocol_group';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'admin_actions' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '6',
    ),
    'author' => array(
      'format' => 'author',
      'label' => 'hidden',
      'weight' => '5',
    ),
    'comments' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '1',
    ),
    'title' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '0',
    ),
  );
  $export['node|cultural_protocol_group|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|cultural_protocol_group|featured_content';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'cultural_protocol_group';
  $ds_fieldsetting->view_mode = 'featured_content';
  $ds_fieldsetting->settings = array(
    'featured_content_type' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '2',
    ),
    'featured_content_view_link' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '0',
    ),
    'title' => array(
      'format' => 'default',
      'formatter_settings' => array(
        'class' => '',
        'ft' => array(),
        'link' => '1',
        'wrapper' => 'h2',
      ),
      'label' => 'hidden',
      'weight' => '3',
    ),
  );
  $export['node|cultural_protocol_group|featured_content'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|cultural_protocol_group|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'cultural_protocol_group';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'create_content_block_ds_field' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '7',
    ),
    'dhan_notify' => array(
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
      'label' => 'above',
      'weight' => '6',
    ),
    'group_management_links' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '2',
    ),
    'group_members' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '4',
    ),
    'mukurtu_mobile_sync' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '0',
    ),
    'og_group_ref' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'protocol_dh_items' => array(
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
      'label' => 'above',
      'weight' => '3',
    ),
  );
  $export['node|cultural_protocol_group|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|cultural_protocol_group|mukurtu_mobile';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'cultural_protocol_group';
  $ds_fieldsetting->view_mode = 'mukurtu_mobile';
  $ds_fieldsetting->settings = array(
    'field_comm_dh_items' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'og_group_ref' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'title' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '0',
    ),
  );
  $export['node|cultural_protocol_group|mukurtu_mobile'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|cultural_protocol_group|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'cultural_protocol_group';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'featured_content_type' => array(
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
      'label' => 'hidden',
      'weight' => '0',
    ),
    'title' => array(
      'format' => 'default',
      'formatter_settings' => array(
        'class' => '',
        'ft' => array(),
        'link' => '1',
        'wrapper' => 'h2',
      ),
      'label' => 'hidden',
      'weight' => '0',
    ),
  );
  $export['node|cultural_protocol_group|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function ma_culturalprotocol_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'protocol_dh_items';
  $ds_field->label = 'Recent DH Items';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'cultural_protocol_group|full';
  $ds_field->properties = array(
    'block' => 'views|community_dh_items-block_2',
    'block_render' => '3',
  );
  $export['protocol_dh_items'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ma_culturalprotocol_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|cultural_protocol_group|browse_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'cultural_protocol_group';
  $ds_layout->view_mode = 'browse_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'field_media' => 'ds_content',
      'title' => 'ds_content',
    ),
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'limit' => array(
      'field_media' => '1',
    ),
    'regions' => array(
      'ds_content' => array(
        0 => 'field_media',
        1 => 'title',
      ),
    ),
  );
  $export['node|cultural_protocol_group|browse_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|cultural_protocol_group|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'cultural_protocol_group';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'fields' => array(
      'admin_actions' => 'right',
      'author' => 'right',
      'body' => 'left',
      'comments' => 'left',
      'group_register' => 'left',
      'title' => 'header',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => 0,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        1 => 'comments',
        2 => 'body',
        5 => 'group_register',
      ),
      'right' => array(
        3 => 'author',
        4 => 'admin_actions',
      ),
    ),
    'wrappers' => array(
      'footer' => 'div',
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
    ),
  );
  $export['node|cultural_protocol_group|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|cultural_protocol_group|featured_content';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'cultural_protocol_group';
  $ds_layout->view_mode = 'featured_content';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'fields' => array(
      'body' => 'central',
      'featured_content_type' => 'central',
      'featured_content_view_link' => 'central',
      'field_protocol_image_thumbnail' => 'central',
      'title' => 'central',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'central' => array(
        0 => 'featured_content_view_link',
        1 => 'field_protocol_image_thumbnail',
        2 => 'featured_content_type',
        3 => 'title',
        4 => 'body',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
    ),
  );
  $export['node|cultural_protocol_group|featured_content'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|cultural_protocol_group|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'cultural_protocol_group';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'create_content_block_ds_field' => 'right',
      'dhan_notify' => 'right',
      'field_protocol_image' => 'top',
      'group_management_links' => 'left',
      'group_members' => 'right',
      'mukurtu_mobile_sync' => 'top',
      'og_group_ref' => 'right',
      'protocol_dh_items' => 'left',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'left' => array(
        2 => 'body',
        3 => 'group_management_links',
        4 => 'protocol_dh_items',
      ),
      'right' => array(
        4 => 'group_members',
        5 => 'og_group_ref',
        6 => 'dhan_notify',
        7 => 'create_content_block_ds_field',
      ),
      'top' => array(
        0 => 'mukurtu_mobile_sync',
        1 => 'field_protocol_image',
      ),
    ),
    'wrappers' => array(
      'bottom' => 'div',
      'left' => 'div',
      'right' => 'div',
      'top' => 'div',
    ),
  );
  $export['node|cultural_protocol_group|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|cultural_protocol_group|mukurtu_mobile';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'cultural_protocol_group';
  $ds_layout->view_mode = 'mukurtu_mobile';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_comm_dh_items' => 'ds_content',
      'field_protocol_image' => 'ds_content',
      'og_group_ref' => 'ds_content',
      'title' => 'ds_content',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'limit' => array(
      'field_comm_dh_items' => '8',
    ),
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_protocol_image',
        2 => 'body',
        3 => 'og_group_ref',
        4 => 'field_comm_dh_items',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
  );
  $export['node|cultural_protocol_group|mukurtu_mobile'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|cultural_protocol_group|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'cultural_protocol_group';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_4_8';
  $ds_layout->settings = array(
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'fields' => array(
      'body' => 'right',
      'featured_content_type' => 'right',
      'field_protocol_image_thumbnail' => 'left',
      'title' => 'right',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'left' => array(
        1 => 'field_protocol_image_thumbnail',
      ),
      'right' => array(
        0 => 'title',
        2 => 'featured_content_type',
        3 => 'body',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
  );
  $export['node|cultural_protocol_group|teaser'] = $ds_layout;

  return $export;
}
