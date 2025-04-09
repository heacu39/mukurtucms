<?php

/**
 * @file
 * ma_core.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function ma_core_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'create_content_block_ds_field';
  $ds_field->label = 'Create Content Block DS';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'ma_core|create_content',
    'block_render' => '1',
  );
  $export['create_content_block_ds_field'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ma_core_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'fields' => array(
      '_add_existing_field' => 'hidden',
      'body' => 'ds_content',
      'field_category' => 'ds_content',
      'field_image' => 'ds_content',
      'field_tags' => 'ds_content',
      'field_test_assets' => 'ds_content',
      'path' => 'ds_content',
      'redirect' => 'hidden',
      'title' => 'ds_content',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_category',
        2 => 'field_tags',
        3 => 'field_image',
        4 => 'body',
        5 => 'path',
        7 => 'field_test_assets',
      ),
      'hidden' => array(
        6 => 'redirect',
        8 => '_add_existing_field',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
  );
  $export['node|article|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = '3col_unbalanced_html5';
  $ds_layout->settings = array(
    'classes' => array(
      'header' => array(
        'grid-6' => 'grid-6',
      ),
      'left' => array(
        'grid-6' => 'grid-6',
      ),
      'right' => array(
        'grid-2' => 'grid-2',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'comments' => 'left',
    ),
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'body',
        1 => 'comments',
      ),
    ),
  );
  $export['node|page|full'] = $ds_layout;

  return $export;
}
