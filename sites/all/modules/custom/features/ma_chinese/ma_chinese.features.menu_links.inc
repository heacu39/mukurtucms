<?php

/**
 * @file
 * ma_chinese.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ma_chinese_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_-:admin/people/create.
  $menu_links['main-menu_-:admin/people/create'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/people/create',
    'router_path' => 'admin/people/create',
    'link_title' => '+ 用户',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_-:admin/people/create',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'language' => 'zh-hans',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_:node/add',
  );
  // Exported menu link: main-menu_-:admin/structure/taxonomy/category/add.
  $menu_links['main-menu_-:admin/structure/taxonomy/category/add'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/category/add',
    'router_path' => 'admin/structure/taxonomy/%/add',
    'link_title' => '+ 类别',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_-:admin/structure/taxonomy/category/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'zh-hans',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_:node/add',
  );
  // Exported menu link: main-menu_-:node/add/collection.
  $menu_links['main-menu_-:node/add/collection'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/collection',
    'router_path' => 'node/add/collection',
    'link_title' => '+ 收藏',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_-:node/add/collection',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'zh-hans',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_:node/add',
  );
  // Exported menu link: main-menu_-:node/add/community.
  $menu_links['main-menu_-:node/add/community'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/community',
    'router_path' => 'node/add/community',
    'link_title' => '+ 社区',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_-:node/add/community',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'zh-hans',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_:node/add',
  );
  // Exported menu link: main-menu_-:node/add/cultural-protocol-group.
  $menu_links['main-menu_-:node/add/cultural-protocol-group'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/cultural-protocol-group',
    'router_path' => 'node/add/cultural-protocol-group',
    'link_title' => '+ 文化礼仪',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_-:node/add/cultural-protocol-group',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'zh-hans',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_:node/add',
  );
  // Exported menu link: main-menu_-:node/add/dictionary-word.
  $menu_links['main-menu_-:node/add/dictionary-word'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/dictionary-word',
    'router_path' => 'node/add/dictionary-word',
    'link_title' => '+ 词典词',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_-:node/add/dictionary-word',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'zh-hans',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_:node/add',
  );
  // Exported menu link: main-menu_-:node/add/digital-heritage.
  $menu_links['main-menu_-:node/add/digital-heritage'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/digital-heritage',
    'router_path' => 'node/add/digital-heritage',
    'link_title' => '+ 数字遗产',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_-:node/add/digital-heritage',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'zh-hans',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_:node/add',
  );
  // Exported menu link: main-menu_-:node/add/lesson.
  $menu_links['main-menu_-:node/add/lesson'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/lesson',
    'router_path' => 'node/add/lesson',
    'link_title' => '+ 课程',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_-:node/add/lesson',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'zh-hans',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_:node/add',
  );
  // Exported menu link: main-menu_-:node/add/personal-collection.
  $menu_links['main-menu_-:node/add/personal-collection'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/personal-collection',
    'router_path' => 'node/add/personal-collection',
    'link_title' => '+ 个人收藏',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_-:node/add/personal-collection',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'zh-hans',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_:node/add',
  );
  // Exported menu link: main-menu_-:node/add/unit-plan.
  $menu_links['main-menu_-:node/add/unit-plan'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/unit-plan',
    'router_path' => 'node/add/unit-plan',
    'link_title' => '+ 单位计划',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_-:node/add/unit-plan',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'zh-hans',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_:node/add',
  );
  // Exported menu link: main-menu_:dashboard.
  $menu_links['main-menu_:dashboard'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'dashboard',
    'router_path' => 'dashboard',
    'link_title' => '信息面板',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_:dashboard',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'zh-hans',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_:node/add.
  $menu_links['main-menu_:node/add'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => '添加内容',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_:node/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
    'language' => 'zh-hans',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_:user.
  $menu_links['main-menu_:user'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => '用户帐户',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'zh-hans',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-browse-menu_x-about:node/1.
  $menu_links['menu-browse-menu_x-about:node/1'] = array(
    'menu_name' => 'menu-browse-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => '关于',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-browse-menu_x-about:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'zh-hans',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-browse-menu_x-browse-collections:collections.
  $menu_links['menu-browse-menu_x-browse-collections:collections'] = array(
    'menu_name' => 'menu-browse-menu',
    'link_path' => 'collections',
    'router_path' => 'collections',
    'link_title' => '浏览收藏',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-browse-menu_x-browse-collections:collections',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'zh-hans',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-browse-menu_x-browse-dictionary:dictionary.
  $menu_links['menu-browse-menu_x-browse-dictionary:dictionary'] = array(
    'menu_name' => 'menu-browse-menu',
    'link_path' => 'dictionary',
    'router_path' => 'dictionary',
    'link_title' => '浏览字典',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-browse-menu_x-browse-dictionary:dictionary',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'language' => 'zh-hans',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-browse-menu_x-browse-digital-heritage:digital-heritage.
  $menu_links['menu-browse-menu_x-browse-digital-heritage:digital-heritage'] = array(
    'menu_name' => 'menu-browse-menu',
    'link_path' => 'digital-heritage',
    'router_path' => 'digital-heritage',
    'link_title' => '浏览数字遗产',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-browse-menu_x-browse-digital-heritage:digital-heritage',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'zh-hans',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-browse-menu_x-browse:browse.
  $menu_links['menu-browse-menu_x-browse:browse'] = array(
    'menu_name' => 'menu-browse-menu',
    'link_path' => 'browse',
    'router_path' => 'browse',
    'link_title' => '浏览',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-browse-menu_x-browse:browse',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'language' => 'zh-hans',
    'menu_links_customized' => 1,
  );

  return $menu_links;
}
