<?php

/**
 * @file
 * scald_bilibili_features.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function scald_bilibili_features_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fitvids_customselectors';
  $strongarm->value = '//player.bilibili.com/player.html';
  $export['fitvids_customselectors'] = $strongarm;

  return $export;
}
