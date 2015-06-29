<?php
/**
 * @file
 * exhibition_base.default_environment_indicator_environments.inc
 */

/**
 * Implements hook_default_environment_indicator_environment().
 */
function exhibition_base_default_environment_indicator_environment() {
  $export = array();

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'dev';
  $environment->name = 'dev';
  $environment->regexurl = 'dev-srebrenica-women.pantheon.io';
  $environment->settings = array(
    'color' => '#2a6bff',
    'text_color' => '#ffffff',
    'weight' => '-15',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['dev'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'local';
  $environment->name = 'local';
  $environment->regexurl = 'srebrenica-women.dd';
  $environment->settings = array(
    'color' => '#979797',
    'text_color' => '#ffffff',
    'weight' => '-10',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['local'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'test';
  $environment->name = 'Test';
  $environment->regexurl = 'test-srebrenica-women.pantheon.io';
  $environment->settings = array(
    'color' => '#ffd601',
    'text_color' => '#000000',
    'weight' => '-10',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['test'] = $environment;

  return $export;
}
