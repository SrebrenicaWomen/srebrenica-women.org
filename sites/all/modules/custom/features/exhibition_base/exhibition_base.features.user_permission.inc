<?php
/**
 * @file
 * exhibition_base.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function exhibition_base_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(),
    'module' => 'contextual',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(),
    'module' => 'block',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'administer entity translation'.
  $permissions['administer entity translation'] = array(
    'name' => 'administer entity translation',
    'roles' => array(),
    'module' => 'entity_translation',
  );

  // Exported permission: 'administer entity view modes'.
  $permissions['administer entity view modes'] = array(
    'name' => 'administer entity view modes',
    'roles' => array(),
    'module' => 'entity_view_mode',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(),
    'module' => 'image',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(),
    'module' => 'locale',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'clone node'.
  $permissions['clone node'] = array(
    'name' => 'clone node',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'clone own nodes'.
  $permissions['clone own nodes'] = array(
    'name' => 'clone own nodes',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'create author content'.
  $permissions['create author content'] = array(
    'name' => 'create author content',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create detail content'.
  $permissions['create detail content'] = array(
    'name' => 'create detail content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create portrait content'.
  $permissions['create portrait content'] = array(
    'name' => 'create portrait content',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create visual content'.
  $permissions['create visual content'] = array(
    'name' => 'create visual content',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any author content'.
  $permissions['delete any author content'] = array(
    'name' => 'delete any author content',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any detail content'.
  $permissions['delete any detail content'] = array(
    'name' => 'delete any detail content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any portrait content'.
  $permissions['delete any portrait content'] = array(
    'name' => 'delete any portrait content',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any visual content'.
  $permissions['delete any visual content'] = array(
    'name' => 'delete any visual content',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own author content'.
  $permissions['delete own author content'] = array(
    'name' => 'delete own author content',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own detail content'.
  $permissions['delete own detail content'] = array(
    'name' => 'delete own detail content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own portrait content'.
  $permissions['delete own portrait content'] = array(
    'name' => 'delete own portrait content',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own visual content'.
  $permissions['delete own visual content'] = array(
    'name' => 'delete own visual content',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'display admin pages in another language'.
  $permissions['display admin pages in another language'] = array(
    'name' => 'display admin pages in another language',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
      'translator' => 'translator',
    ),
    'module' => 'admin_language',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit any author content'.
  $permissions['edit any author content'] = array(
    'name' => 'edit any author content',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any detail content'.
  $permissions['edit any detail content'] = array(
    'name' => 'edit any detail content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any portrait content'.
  $permissions['edit any portrait content'] = array(
    'name' => 'edit any portrait content',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any visual content'.
  $permissions['edit any visual content'] = array(
    'name' => 'edit any visual content',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own author content'.
  $permissions['edit own author content'] = array(
    'name' => 'edit own author content',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own detail content'.
  $permissions['edit own detail content'] = array(
    'name' => 'edit own detail content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own portrait content'.
  $permissions['edit own portrait content'] = array(
    'name' => 'edit own portrait content',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own visual content'.
  $permissions['edit own visual content'] = array(
    'name' => 'edit own visual content',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'publish button publish any author'.
  $permissions['publish button publish any author'] = array(
    'name' => 'publish button publish any author',
    'roles' => array(),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button publish any content types'.
  $permissions['publish button publish any content types'] = array(
    'name' => 'publish button publish any content types',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button publish any detail'.
  $permissions['publish button publish any detail'] = array(
    'name' => 'publish button publish any detail',
    'roles' => array(),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button publish any page'.
  $permissions['publish button publish any page'] = array(
    'name' => 'publish button publish any page',
    'roles' => array(),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button publish any portrait'.
  $permissions['publish button publish any portrait'] = array(
    'name' => 'publish button publish any portrait',
    'roles' => array(),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button publish any visual'.
  $permissions['publish button publish any visual'] = array(
    'name' => 'publish button publish any visual',
    'roles' => array(),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button publish own author'.
  $permissions['publish button publish own author'] = array(
    'name' => 'publish button publish own author',
    'roles' => array(),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button publish own detail'.
  $permissions['publish button publish own detail'] = array(
    'name' => 'publish button publish own detail',
    'roles' => array(),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button publish own page'.
  $permissions['publish button publish own page'] = array(
    'name' => 'publish button publish own page',
    'roles' => array(),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button publish own portrait'.
  $permissions['publish button publish own portrait'] = array(
    'name' => 'publish button publish own portrait',
    'roles' => array(),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button publish own visual'.
  $permissions['publish button publish own visual'] = array(
    'name' => 'publish button publish own visual',
    'roles' => array(),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button unpublish any author'.
  $permissions['publish button unpublish any author'] = array(
    'name' => 'publish button unpublish any author',
    'roles' => array(),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button unpublish any content types'.
  $permissions['publish button unpublish any content types'] = array(
    'name' => 'publish button unpublish any content types',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button unpublish any detail'.
  $permissions['publish button unpublish any detail'] = array(
    'name' => 'publish button unpublish any detail',
    'roles' => array(),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button unpublish any page'.
  $permissions['publish button unpublish any page'] = array(
    'name' => 'publish button unpublish any page',
    'roles' => array(),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button unpublish any portrait'.
  $permissions['publish button unpublish any portrait'] = array(
    'name' => 'publish button unpublish any portrait',
    'roles' => array(),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button unpublish any visual'.
  $permissions['publish button unpublish any visual'] = array(
    'name' => 'publish button unpublish any visual',
    'roles' => array(),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button unpublish own author'.
  $permissions['publish button unpublish own author'] = array(
    'name' => 'publish button unpublish own author',
    'roles' => array(),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button unpublish own detail'.
  $permissions['publish button unpublish own detail'] = array(
    'name' => 'publish button unpublish own detail',
    'roles' => array(),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button unpublish own page'.
  $permissions['publish button unpublish own page'] = array(
    'name' => 'publish button unpublish own page',
    'roles' => array(),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button unpublish own portrait'.
  $permissions['publish button unpublish own portrait'] = array(
    'name' => 'publish button unpublish own portrait',
    'roles' => array(),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button unpublish own visual'.
  $permissions['publish button unpublish own visual'] = array(
    'name' => 'publish button unpublish own visual',
    'roles' => array(),
    'module' => 'publish_button',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'toggle field translatability'.
  $permissions['toggle field translatability'] = array(
    'name' => 'toggle field translatability',
    'roles' => array(),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate any entity'.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
      'translator' => 'translator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
      'translator' => 'translator',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
      'translator' => 'translator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate node entities'.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
      'translator' => 'translator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate taxonomy_term entities'.
  $permissions['translate taxonomy_term entities'] = array(
    'name' => 'translate taxonomy_term entities',
    'roles' => array(),
    'module' => 'entity_translation',
  );

  // Exported permission: 'use all enabled languages'.
  $permissions['use all enabled languages'] = array(
    'name' => 'use all enabled languages',
    'roles' => array(),
    'module' => 'admin_language',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(),
    'module' => 'ctools',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'chiefeditor' => 'chiefeditor',
      'editor' => 'editor',
    ),
    'module' => 'system',
  );

  return $permissions;
}
