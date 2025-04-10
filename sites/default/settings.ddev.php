<?php


/**
 * @file
 * This is a Drupal 7 settings.ddev.php file automatically generated by DDEV.
 * ddev manages this file and may delete or overwrite the file unless this
 * comment is removed.
 */

$host = "db";
$port = 3306;
$driver = "mysql";

// If DDEV_PHP_VERSION is not set but IS_DDEV_PROJECT *is*, it means we're running (drush) on the host,
// so use the host-side bind port on docker IP
if (empty(getenv('DDEV_PHP_VERSION') && getenv('IS_DDEV_PROJECT') == 'true')) {
  $host = "127.0.0.1";
  $port = 33262;
}

$databases['default']['default']['database'] = "db";
$databases['default']['default']['username'] = "db";
$databases['default']['default']['password'] = "db";
$databases['default']['default']['host'] = $host;
$databases['default']['default']['driver'] = $driver;
$databases['default']['default']['port'] = $port;

$drupal_hash_salt = '3c3b7d2459599c93102bcc8599bc8eadd0d50ed4394ad6c03f856cfe34f04cc6';

// This will prevent Drupal from setting read-only permissions on sites/default.
$conf['skip_permissions_hardening'] = TRUE;

// This will ensure the site can only be accessed through the intended host
// names. Additional host patterns can be added for custom configurations.
$conf['trusted_host_patterns'] = ['.*'];

// Disable verbose logging for errors.
// https://www.drupal.org/docs/7/creating-custom-modules/show-all-errors-while-developing
$conf['error_level'] = 0;
