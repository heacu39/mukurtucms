<?php

/**
 * @file
 * ma_community.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ma_community_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|community|browse_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'community';
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
  $export['node|community|browse_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|community|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'community';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'admin_actions' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '4',
    ),
    'comments' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '2',
    ),
    'links' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '3',
    ),
  );
  $export['node|community|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|community|featured_content';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'community';
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
  $export['node|community|featured_content'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|community|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'community';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'community_browse_all_dh_link' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '8',
    ),
    'community_dh_items' => array(
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
      'label' => 'above',
      'weight' => '3',
    ),
    'community_membership_status' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '0',
    ),
    'community_protocol_items' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '5',
    ),
    'create_content_block_ds_field' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '10',
    ),
    'featured_collections' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '10',
    ),
    'field_child_communities' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_parent_community' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'group_members' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '4',
    ),
    'mukurtu_mobile_sync' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '1',
    ),
  );
  $export['node|community|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|community|mukurtu_mobile';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'community';
  $ds_fieldsetting->view_mode = 'mukurtu_mobile';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '0',
    ),
  );
  $export['node|community|mukurtu_mobile'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|community|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'community';
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
      'label' => 'hidden',
      'weight' => '3',
    ),
    'mukurtu_mobile_sync' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '2',
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
      'weight' => '1',
    ),
  );
  $export['node|community|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|community|thumbed';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'community';
  $ds_fieldsetting->view_mode = 'thumbed';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'format' => 'default',
      'formatter_settings' => array(
        'class' => '',
        'ft' => array(),
        'link' => '1',
        'wrapper' => 'h3',
      ),
      'label' => 'hidden',
      'weight' => '0',
    ),
  );
  $export['node|community|thumbed'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function ma_community_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'community_browse_all_dh_link';
  $ds_field->label = 'Community Browse All DH Link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'community|*';
  $ds_field->properties = array(
    'code' => array(
      'format' => 'ds_code',
      'value' => '<h2 class="block-title">Digital Heritage</h2><div class="view-content"><a href="<?php print url("/digital-heritage/community");?>/[node:nid]">Browse All Digital Heritage in [node:title]</a></div>',
    ),
    'use_token' => 1,
  );
  $export['community_browse_all_dh_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'community_dh_items';
  $ds_field->label = 'Recent DH Items';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'community|full';
  $ds_field->properties = array(
    'block' => 'views|community_dh_items-block_1',
    'block_render' => '3',
  );
  $export['community_dh_items'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'community_membership_status';
  $ds_field->label = 'Community Membership Status';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'community|*';
  $ds_field->properties = array(
    'code' => array(
      'format' => 'ds_code',
      'value' => '<?php
$subscribe_link = _render_subscribe_link($entity);
print drupal_render($subscribe_link);
?>',
    ),
    'use_token' => 0,
  );
  $export['community_membership_status'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'community_protocol_items';
  $ds_field->label = 'Community Protocol Items';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'community|full';
  $ds_field->properties = array(
    'block' => 'views|bef69c525c1512e210af0dfe32448806',
    'block_render' => '1',
  );
  $export['community_protocol_items'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'featured_collections';
  $ds_field->label = 'Featured Collections';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'community|full';
  $ds_field->properties = array(
    'block' => 'views|afbb1e221e4d23e4297e4855a7f3b89f',
    'block_render' => '2',
  );
  $export['featured_collections'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'group_management_links';
  $ds_field->label = 'Group Management Links';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'community|full
cultural_protocol_group|full';
  $ds_field->properties = array(
    'block' => 'mukurtu_splash|mukurtu_group_management',
    'block_render' => '3',
  );
  $export['group_management_links'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'group_members';
  $ds_field->label = 'Group Members';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|group_members-block_1',
    'block_render' => '1',
  );
  $export['group_members'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ma_community_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|community|browse_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'community';
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
  $export['node|community|browse_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|community|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'community';
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
      'body' => 'left',
      'comments' => 'left',
      'group_group' => 'right',
      'group_register' => 'right',
      'links' => 'right',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => 0,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'left' => array(
        0 => 'body',
        1 => 'comments',
      ),
      'right' => array(
        2 => 'links',
        3 => 'admin_actions',
        4 => 'group_group',
        5 => 'group_register',
      ),
    ),
    'wrappers' => array(
      'footer' => 'div',
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
    ),
  );
  $export['node|community|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|community|featured_content';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'community';
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
      'field_community_image_thumbnail' => 'central',
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
        1 => 'field_community_image_thumbnail',
        2 => 'featured_content_type',
        3 => 'title',
        4 => 'body',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
    ),
  );
  $export['node|community|featured_content'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|community|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'community';
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
      'field_child_communities' => 'ds_content',
      'field_comm_protocols' => 'hidden',
      'field_community_featured_colls' => 'ds_content',
      'field_community_image' => 'ds_content',
      'field_community_image_thumbnail' => 'ds_content',
      'field_dhan_notified_users' => 'hidden',
      'field_membership_list_options' => 'ds_content',
      'field_parent_community' => 'ds_content',
      'field_pre_actions' => 'ds_content',
      'group_access' => 'ds_content',
      'group_advanced' => 'ds_content',
      'group_basic' => 'ds_content',
      'group_custom_tk_label_text' => 'ds_content',
      'group_group' => 'hidden',
      'group_register' => 'ds_content',
      'group_tabs' => 'ds_content',
      'og_group_ref' => 'hidden',
      'og_roles_permissions' => 'ds_content',
      'path' => 'ds_content',
      'redirect' => 'ds_content',
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
        1 => 'group_basic',
        2 => 'field_pre_actions',
        3 => 'body',
        4 => 'group_tabs',
        5 => 'group_advanced',
        6 => 'field_community_image',
        7 => 'group_access',
        8 => 'redirect',
        9 => 'field_community_image_thumbnail',
        10 => 'path',
        11 => 'field_parent_community',
        13 => 'og_roles_permissions',
        14 => 'group_register',
        15 => 'field_child_communities',
        17 => 'field_membership_list_options',
        18 => 'field_community_featured_colls',
        20 => 'group_custom_tk_label_text',
      ),
      'hidden' => array(
        13 => 'group_group',
        16 => 'og_group_ref',
        19 => 'field_dhan_notified_users',
        21 => 'field_comm_protocols',
        22 => '_add_existing_field',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
  );
  $export['node|community|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|community|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'community';
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
      'community_browse_all_dh_link' => 'right',
      'community_dh_items' => 'left',
      'community_membership_status' => 'right',
      'community_protocol_items' => 'right',
      'create_content_block_ds_field' => 'right',
      'featured_collections' => 'right',
      'field_child_communities' => 'right',
      'field_community_image' => 'top',
      'field_parent_community' => 'right',
      'group_management_links' => 'left',
      'group_members' => 'right',
      'mukurtu_mobile_sync' => 'top',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'left' => array(
        2 => 'group_management_links',
        3 => 'body',
        4 => 'community_dh_items',
      ),
      'right' => array(
        5 => 'community_membership_status',
        6 => 'group_members',
        7 => 'community_protocol_items',
        8 => 'field_parent_community',
        9 => 'field_child_communities',
        10 => 'community_browse_all_dh_link',
        11 => 'featured_collections',
        12 => 'create_content_block_ds_field',
      ),
      'top' => array(
        0 => 'field_community_image',
        1 => 'mukurtu_mobile_sync',
      ),
    ),
    'wrappers' => array(
      'bottom' => 'div',
      'left' => 'div',
      'right' => 'div',
      'top' => 'div',
    ),
  );
  $export['node|community|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|community|mukurtu_mobile';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'community';
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
      'field_child_communities' => 'ds_content',
      'field_comm_dh_items' => 'ds_content',
      'field_comm_protocols' => 'ds_content',
      'field_community_featured_colls' => 'ds_content',
      'field_community_image' => 'ds_content',
      'field_parent_community' => 'ds_content',
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
        1 => 'field_community_image',
        2 => 'body',
        3 => 'field_comm_protocols',
        4 => 'field_parent_community',
        5 => 'field_child_communities',
        6 => 'field_community_featured_colls',
        7 => 'field_comm_dh_items',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
  );
  $export['node|community|mukurtu_mobile'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|community|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'community';
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
      'field_community_image_thumbnail' => 'left',
      'mukurtu_mobile_sync' => 'right',
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
        0 => 'field_community_image_thumbnail',
      ),
      'right' => array(
        1 => 'title',
        2 => 'mukurtu_mobile_sync',
        3 => 'featured_content_type',
        4 => 'body',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
  );
  $export['node|community|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|community|thumbed';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'community';
  $ds_layout->view_mode = 'thumbed';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'fields' => array(
      'field_community_image_thumbnail' => 'ds_content',
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
        1 => 'field_community_image_thumbnail',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
  );
  $export['node|community|thumbed'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function ma_community_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'thumbed';
  $ds_view_mode->label = 'Thumbed';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['thumbed'] = $ds_view_mode;

  return $export;
}
