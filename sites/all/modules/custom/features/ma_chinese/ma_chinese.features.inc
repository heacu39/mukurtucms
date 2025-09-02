<?php

/**
 * @file
 * ma_chinese.features.inc
 */

/**
 * Implements hook_ds_field_settings_info_alter().
 */
function ma_chinese_ds_field_settings_info_alter(&$data) {
  if (isset($data['node|community|full'])) {
    $data['node|community|full']->settings['community_dh_items']['label'] = 'hidden'; /* WAS: 'above' */
  }
}

/**
 * Implements hook_ds_custom_fields_info_alter().
 */
function ma_chinese_ds_custom_fields_info_alter(&$data) {
  if (isset($data['community_browse_all_dh_link'])) {
    $data['community_browse_all_dh_link']->properties['code']['value'] = '<h2 class="block-title">Digital Heritage</h2><div class="view-content"><a href="<?php print url("/digital-heritage/community");?>/[node:nid]">Browse All All Digital Heritage in [node:title]</a></div>'; /* WAS: '<h2 class="block-title">Digital Heritage</h2><div class="view-content"><a href="<?php print url("/digital-heritage/community");?>/[node:nid]">Browse All Digital Heritage in [node:title]</a></div>' */
  }
  if (isset($data['community_dh_items'])) {
    $data['community_dh_items']->properties['block_render'] = 1; /* WAS: 3 */
    $data['community_dh_items']->properties['block_visibility'] = 0; /* WAS: '' */
  }
}

/**
 * Implements hook_ds_layout_settings_info_alter().
 */
function ma_chinese_ds_layout_settings_info_alter(&$data) {
  if (isset($data['node|community|full'])) {
    $data['node|community|full']->settings['regions']['right'][1] = 'community_membership_status'; /* WAS: '' */
    $data['node|community|full']->settings['regions']['right'][10] = 'featured_collections'; /* WAS: 'community_browse_all_dh_link' */
    $data['node|community|full']->settings['regions']['right'][11] = 'create_content_block_ds_field'; /* WAS: 'featured_collections' */
    $data['node|community|full']->settings['regions']['right'][5] = 'group_members'; /* WAS: 'community_membership_status' */
    $data['node|community|full']->settings['regions']['right'][6] = 'community_protocol_items'; /* WAS: 'group_members' */
    $data['node|community|full']->settings['regions']['right'][7] = 'community_browse_all_dh_link'; /* WAS: 'community_protocol_items' */
    $data['node|community|full']->settings['regions']['top'][2] = 'mukurtu_mobile_sync'; /* WAS: '' */
    unset($data['node|community|full']->settings['fields']['group_management_links']);
    unset($data['node|community|full']->settings['regions']['left'][2]);
    unset($data['node|community|full']->settings['regions']['right'][12]);
    unset($data['node|community|full']->settings['regions']['top'][1]);
  }
}
