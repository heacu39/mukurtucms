<?php

/**
 * @file
 * ma_dictionary.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ma_dictionary_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_-dictionary-word:node/add/dictionary-word.
  $menu_links['main-menu_-dictionary-word:node/add/dictionary-word'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/dictionary-word',
    'router_path' => 'node/add/dictionary-word',
    'link_title' => '+ Dictionary Word',
    'options' => array(
      'identifier' => 'main-menu_-dictionary-word:node/add/dictionary-word',
      'attributes' => array(
        'title' => 'Add a word to the dictionary',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('+ Dictionary Word');

  return $menu_links;
}
