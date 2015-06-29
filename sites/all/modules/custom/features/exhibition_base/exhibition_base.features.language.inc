<?php
/**
 * @file
 * exhibition_base.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function exhibition_base_locale_default_languages() {
  $languages = array();

  // Exported language: bs.
  $languages['bs'] = array(
    'language' => 'bs',
    'name' => 'Bosnian',
    'native' => 'Bosanski',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 3,
    'formula' => '(((($n%10)==1)&&(($n%100)!=11))?(0):((((($n%10)>=2)&&(($n%10)<=4))&&((($n%100)<10)||(($n%100)>=20)))?(1):2))',
    'domain' => 'srebrenica-zene.org',
    'prefix' => '',
    'weight' => -9,
  );
  // Exported language: de.
  $languages['de'] = array(
    'language' => 'de',
    'name' => 'German',
    'native' => 'Deutsch',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => 'srebrenica-frauen.org',
    'prefix' => '',
    'weight' => -8,
  );
  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => 'srebrenica-women.org',
    'prefix' => '',
    'weight' => -10,
  );
  return $languages;
}
