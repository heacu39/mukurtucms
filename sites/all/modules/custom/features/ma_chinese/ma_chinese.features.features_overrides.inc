<?php

/**
 * @file
 * ma_chinese.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ma_chinese_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: ds_field_settings
  $overrides["ds_field_settings.node|community|full.settings|community_dh_items|label"] = 'hidden';

  // Exported overrides for: ds_fields
  $overrides["ds_fields.community_browse_all_dh_link.properties|code|value"] = '<h2 class="block-title">Digital Heritage</h2><div class="view-content"><a href="<?php print url("/digital-heritage/community");?>/[node:nid]">Browse All All Digital Heritage in [node:title]</a></div>';
  $overrides["ds_fields.community_dh_items.properties|block_render"] = 1;
  $overrides["ds_fields.community_dh_items.properties|block_visibility"] = 0;

  // Exported overrides for: ds_layout_settings
  $overrides["ds_layout_settings.node|community|full.settings|fields|group_management_links"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|community|full.settings|regions|left|2"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|community|full.settings|regions|right|1"] = 'community_membership_status';
  $overrides["ds_layout_settings.node|community|full.settings|regions|right|10"] = 'featured_collections';
  $overrides["ds_layout_settings.node|community|full.settings|regions|right|11"] = 'create_content_block_ds_field';
  $overrides["ds_layout_settings.node|community|full.settings|regions|right|12"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|community|full.settings|regions|right|5"] = 'group_members';
  $overrides["ds_layout_settings.node|community|full.settings|regions|right|6"] = 'community_protocol_items';
  $overrides["ds_layout_settings.node|community|full.settings|regions|right|7"] = 'community_browse_all_dh_link';
  $overrides["ds_layout_settings.node|community|full.settings|regions|top|1"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|community|full.settings|regions|top|2"] = 'mukurtu_mobile_sync';

 return $overrides;
}
