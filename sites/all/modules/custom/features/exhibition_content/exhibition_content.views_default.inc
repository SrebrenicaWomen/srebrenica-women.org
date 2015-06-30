<?php
/**
 * @file
 * exhibition_content.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function exhibition_content_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Admin content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'field_image_file' => 'field_image_file',
    'nothing_1' => 'nothing_1',
    'field_visual_caption' => 'field_visual_caption',
    'edit_node' => 'edit_node',
    'clone_node' => 'clone_node',
    'field_test_content' => 'field_test_content',
    'title' => 'title',
    'title_1' => 'title_1',
    'status' => 'status',
    'type' => 'type',
    'field_epoch' => 'field_epoch',
    'field_parent_content' => 'field_parent_content',
    'created' => 'created',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image_file' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visual_caption' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'clone_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_test_content' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_epoch' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_parent_content' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::clone_action_clone' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'language' => 'language',
          'status' => 'status',
          'promote' => 'promote',
          'portrait::field_original_group_member' => 'portrait::field_original_group_member',
          'portrait::field_tag' => 'portrait::field_tag',
          'portrait::field_priority' => 'portrait::field_priority',
          'portrait::field_portrait_layout' => 'portrait::field_portrait_layout',
          'portrait::field_test_content' => 'portrait::field_test_content',
          'visual::field_author' => 'visual::field_author',
          'visual::field_epoch' => 'visual::field_epoch',
          'visual::field_visual_layout' => 'visual::field_visual_layout',
          'visual::field_visual_purpose' => 'visual::field_visual_purpose',
          'visual::field_parent_content' => 'visual::field_parent_content',
          'visual::field_priority' => 'visual::field_priority',
          'visual::field_source' => 'visual::field_source',
          'visual::field_tag' => 'visual::field_tag',
          'visual::field_test_content' => 'visual::field_test_content',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Image file */
  $handler->display->display_options['fields']['field_image_file']['id'] = 'field_image_file';
  $handler->display->display_options['fields']['field_image_file']['table'] = 'field_data_field_image_file';
  $handler->display->display_options['fields']['field_image_file']['field'] = 'field_image_file';
  $handler->display->display_options['fields']['field_image_file']['label'] = '';
  $handler->display->display_options['fields']['field_image_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_file']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Thumbnail */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Thumbnail';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_image_file]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_visual_caption']['id'] = 'field_visual_caption';
  $handler->display->display_options['fields']['field_visual_caption']['table'] = 'field_data_field_visual_caption';
  $handler->display->display_options['fields']['field_visual_caption']['field'] = 'field_visual_caption';
  $handler->display->display_options['fields']['field_visual_caption']['label'] = '';
  $handler->display->display_options['fields']['field_visual_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visual_caption']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'node';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = '';
  $handler->display->display_options['fields']['clone_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['clone_node']['element_label_colon'] = FALSE;
  /* Field: Content: Test content */
  $handler->display->display_options['fields']['field_test_content']['id'] = 'field_test_content';
  $handler->display->display_options['fields']['field_test_content']['table'] = 'field_data_field_test_content';
  $handler->display->display_options['fields']['field_test_content']['field'] = 'field_test_content';
  $handler->display->display_options['fields']['field_test_content']['label'] = '';
  $handler->display->display_options['fields']['field_test_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_test_content']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_test_content']['alter']['text'] = 'TEST CONTENT';
  $handler->display->display_options['fields']['field_test_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_test_content']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_test_content']['type'] = 'list_key';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Title + Info */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Title + Info';
  $handler->display->display_options['fields']['title_1']['label'] = 'Title & info';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<strong>[title]</strong> [field_test_content] – ID:[nid] – [edit_node] – [clone_node]<br />
[field_visual_caption]';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_epoch']['id'] = 'field_epoch';
  $handler->display->display_options['fields']['field_epoch']['table'] = 'field_data_field_epoch';
  $handler->display->display_options['fields']['field_epoch']['field'] = 'field_epoch';
  /* Field: Content: Parent content */
  $handler->display->display_options['fields']['field_parent_content']['id'] = 'field_parent_content';
  $handler->display->display_options['fields']['field_parent_content']['table'] = 'field_data_field_parent_content';
  $handler->display->display_options['fields']['field_parent_content']['field'] = 'field_parent_content';
  $handler->display->display_options['fields']['field_parent_content']['label'] = 'Parent';
  $handler->display->display_options['fields']['field_parent_content']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Y-m-d';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Imported data */
  $handler->display->display_options['fields']['field_imported_data']['id'] = 'field_imported_data';
  $handler->display->display_options['fields']['field_imported_data']['table'] = 'field_data_field_imported_data';
  $handler->display->display_options['fields']['field_imported_data']['field'] = 'field_imported_data';
  $handler->display->display_options['fields']['field_imported_data']['exclude'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Title, Caption, Name';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_visual_caption' => 'field_visual_caption',
    'title' => 'title',
    'field_imported_data' => 'field_imported_data',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Time (field_epoch) */
  $handler->display->display_options['filters']['field_epoch_tid']['id'] = 'field_epoch_tid';
  $handler->display->display_options['filters']['field_epoch_tid']['table'] = 'field_data_field_epoch';
  $handler->display->display_options['filters']['field_epoch_tid']['field'] = 'field_epoch_tid';
  $handler->display->display_options['filters']['field_epoch_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_epoch_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_epoch_tid']['expose']['operator_id'] = 'field_epoch_tid_op';
  $handler->display->display_options['filters']['field_epoch_tid']['expose']['label'] = 'Timeframe / Epoch';
  $handler->display->display_options['filters']['field_epoch_tid']['expose']['operator'] = 'field_epoch_tid_op';
  $handler->display->display_options['filters']['field_epoch_tid']['expose']['identifier'] = 'field_epoch_tid';
  $handler->display->display_options['filters']['field_epoch_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_epoch_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_epoch_tid']['vocabulary'] = 'epoch';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Test content (field_test_content) */
  $handler->display->display_options['filters']['field_test_content_value']['id'] = 'field_test_content_value';
  $handler->display->display_options['filters']['field_test_content_value']['table'] = 'field_data_field_test_content';
  $handler->display->display_options['filters']['field_test_content_value']['field'] = 'field_test_content_value';
  $handler->display->display_options['filters']['field_test_content_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_test_content_value']['expose']['operator_id'] = 'field_test_content_value_op';
  $handler->display->display_options['filters']['field_test_content_value']['expose']['label'] = 'Test content?';
  $handler->display->display_options['filters']['field_test_content_value']['expose']['operator'] = 'field_test_content_value_op';
  $handler->display->display_options['filters']['field_test_content_value']['expose']['identifier'] = 'field_test_content_value';
  $handler->display->display_options['filters']['field_test_content_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Field: Imported (field_imported) */
  $handler->display->display_options['filters']['field_imported_value']['id'] = 'field_imported_value';
  $handler->display->display_options['filters']['field_imported_value']['table'] = 'field_data_field_imported';
  $handler->display->display_options['filters']['field_imported_value']['field'] = 'field_imported_value';
  $handler->display->display_options['filters']['field_imported_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_imported_value']['expose']['operator_id'] = 'field_imported_value_op';
  $handler->display->display_options['filters']['field_imported_value']['expose']['label'] = 'Imported?';
  $handler->display->display_options['filters']['field_imported_value']['expose']['operator'] = 'field_imported_value_op';
  $handler->display->display_options['filters']['field_imported_value']['expose']['identifier'] = 'field_imported_value';
  $handler->display->display_options['filters']['field_imported_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Tag (field_tag) */
  $handler->display->display_options['filters']['field_tag_tid']['id'] = 'field_tag_tid';
  $handler->display->display_options['filters']['field_tag_tid']['table'] = 'field_data_field_tag';
  $handler->display->display_options['filters']['field_tag_tid']['field'] = 'field_tag_tid';
  $handler->display->display_options['filters']['field_tag_tid']['value'] = '';
  $handler->display->display_options['filters']['field_tag_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tag_tid']['expose']['operator_id'] = 'field_tag_tid_op';
  $handler->display->display_options['filters']['field_tag_tid']['expose']['label'] = 'Tag';
  $handler->display->display_options['filters']['field_tag_tid']['expose']['operator'] = 'field_tag_tid_op';
  $handler->display->display_options['filters']['field_tag_tid']['expose']['identifier'] = 'field_tag_tid';
  $handler->display->display_options['filters']['field_tag_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_tag_tid']['vocabulary'] = 'tag';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content';
  $translatables['admin_content'] = array(
    t('Master'),
    t('Content'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Displaying @start - @end of @total'),
    t('- Choose an operation -'),
    t('Nid'),
    t('[field_image_file]'),
    t('TEST CONTENT'),
    t('Title'),
    t('Title & info'),
    t('<strong>[title]</strong> [field_test_content] – ID:[nid] – [edit_node] – [clone_node]<br />
[field_visual_caption]'),
    t('Type'),
    t('Time'),
    t('Parent'),
    t('Created'),
    t('Updated'),
    t('Imported data'),
    t('Title, Caption, Name'),
    t('Timeframe / Epoch'),
    t('Status'),
    t('Test content?'),
    t('Imported?'),
    t('Tag'),
    t('Page'),
  );
  $export['admin_content'] = $view;

  return $export;
}
