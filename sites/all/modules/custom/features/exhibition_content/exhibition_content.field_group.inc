<?php
/**
 * @file
 * exhibition_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function exhibition_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|visual|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'visual';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '11',
    'children' => array(
      0 => 'field_epoch',
      1 => 'field_visual_caption',
      2 => 'field_image_file',
      3 => 'field_visual_purpose',
      4 => 'field_parent_content',
      5 => 'field_priority',
      6 => 'field_tag',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-main field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_main|node|visual|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_my_view|node|portrait|form';
  $field_group->group_name = 'group_my_view';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portrait';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'My view',
    'weight' => '20',
    'children' => array(
      0 => 'field_my_view',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-my-view field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_my_view|node|portrait|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_options|node|detail|form';
  $field_group->group_name = 'group_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'detail';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Options',
    'weight' => '7',
    'children' => array(
      0 => 'field_test_content',
      1 => 'field_embed_code',
      2 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-options field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_options|node|detail|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_options|node|portrait|form';
  $field_group->group_name = 'group_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portrait';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Options',
    'weight' => '2',
    'children' => array(
      0 => 'field_original_group_member',
      1 => 'field_tag',
      2 => 'field_lastname',
      3 => 'field_priority',
      4 => 'field_portrait_layout',
      5 => 'field_test_content',
      6 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_options|node|portrait|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_options|node|visual|form';
  $field_group->group_name = 'group_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'visual';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Options',
    'weight' => '1',
    'children' => array(
      0 => 'field_author',
      1 => 'field_video_file',
      2 => 'field_visual_layout',
      3 => 'field_source',
      4 => 'field_test_content',
      5 => 'field_imported',
      6 => 'field_imported_data',
      7 => 'field_imported_id',
      8 => 'title',
      9 => 'language',
      10 => 'field_imported_time',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-options field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_options|node|visual|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_networks|node|portrait|form';
  $field_group->group_name = 'group_social_networks';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portrait';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Social networks',
    'weight' => '19',
    'children' => array(
      0 => 'field_feed_url',
      1 => 'field_social_network_profiles',
      2 => 'field_import_tag',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-social-networks field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_social_networks|node|portrait|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_group|node|portrait|form';
  $field_group->group_name = 'group_tab_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portrait';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tab group',
    'weight' => '1',
    'children' => array(
      0 => 'group_social_networks',
      1 => 'group_my_view',
      2 => 'group_visuals',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tab-group field-group-htabs',
      ),
    ),
  );
  $export['group_tab_group|node|portrait|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_group|node|visual|form';
  $field_group->group_name = 'group_tab_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'visual';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tab group',
    'weight' => '0',
    'children' => array(
      0 => 'group_main',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tab-group field-group-htabs',
      ),
    ),
  );
  $export['group_tab_group|node|visual|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_visuals|node|portrait|form';
  $field_group->group_name = 'group_visuals';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portrait';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Visuals',
    'weight' => '21',
    'children' => array(
      0 => 'field_visual',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-visuals field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_visuals|node|portrait|form'] = $field_group;

  return $export;
}
