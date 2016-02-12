<?php
/**
 * @file
 * sidebar_item.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function sidebar_item_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-sidebar_item-field_image_url'.
  $field_instances['node-sidebar_item-field_image_url'] = array(
    'bundle' => 'sidebar_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'URL address may be internal <em>(relative link)</em> or external <em>(full domain)</em>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image_url',
    'label' => 'URL',
    'required' => 1,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-sidebar_item-field_sidebar_image'.
  $field_instances['node-sidebar_item-field_sidebar_image'] = array(
    'bundle' => 'sidebar_item',
    'deleted' => 0,
    'description' => '<p><b>Note</b>: <em>Uploading</em> the image after <em>choosing</em> a file will trigger a new field for adding <b>alternative text</b>.</p>
Images will be resized to a width of <b>270px</b> to fill the available sidebar space <em>(images whose width is less than 270px will be upscaled - this may introduce pixelization)</em>.
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sidebar_image',
    'label' => 'Sidebar image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'sidebar-images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<p><b>Note</b>: <em>Uploading</em> the image after <em>choosing</em> a file will trigger a new field for adding <b>alternative text</b>.</p>
Images will be resized to a width of <b>270px</b> to fill the available sidebar space <em>(images whose width is less than 270px will be upscaled - this may introduce pixelization)</em>.
');
  t('Sidebar image');
  t('URL');
  t('URL address may be internal <em>(relative link)</em> or external <em>(full domain)</em>.');

  return $field_instances;
}
