<?php

/**
 * @file
 * ma_community.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ma_community_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced|node|community|form';
  $field_group->group_name = 'group_advanced';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'community';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'children' => array(
      0 => 'field_membership_list_options',
      1 => 'group_access',
      2 => 'group_register',
      3 => 'og_roles_permissions',
      4 => 'group_custom_tk_label_text',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'required_fields' => 0,
      ),
      'label' => 'Advanced',
    ),
    'format_type' => 'htab',
    'label' => 'Advanced',
    'weight' => '1',
  );
  $field_groups['group_advanced|node|community|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|community|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'community';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'children' => array(
      0 => 'body',
      1 => 'field_child_communities',
      2 => 'field_community_featured_colls',
      3 => 'field_community_image',
      4 => 'field_community_image_thumbnail',
      5 => 'field_parent_community',
      6 => 'title',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'required_fields' => 1,
      ),
      'label' => 'Basic',
    ),
    'format_type' => 'htab',
    'label' => 'Basic',
    'weight' => '0',
  );
  $field_groups['group_basic|node|community|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_custom_tk_label_text|node|community|form';
  $field_group->group_name = 'group_custom_tk_label_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'community';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_advanced';
  $field_group->data = array(
    'children' => array(),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-custom-tk-label-text field-group-div',
        'description' => 'Tick a TK label\'s checkbox to customize its text. Hover over the label to see its default (non-customized) text.',
        'id' => '',
        'required_fields' => 1,
      ),
      'label' => 'Custom TK Label Text',
    ),
    'format_type' => 'fieldset',
    'label' => 'Custom TK Label Text',
    'weight' => '7',
  );
  $field_groups['group_custom_tk_label_text|node|community|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|community|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'community';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'group_advanced',
      1 => 'group_basic',
    ),
    'format_settings' => array(
      'instance_settings' => array(
        'classes' => '',
      ),
      'label' => 'Tabs',
    ),
    'format_type' => 'htabs',
    'label' => 'Tabs',
    'weight' => '1',
  );
  $field_groups['group_tabs|node|community|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Advanced');
  t('Basic');
  t('Custom TK Label Text');
  t('Tabs');

  return $field_groups;
}
