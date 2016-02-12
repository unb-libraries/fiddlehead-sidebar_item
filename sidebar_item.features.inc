<?php
/**
 * @file
 * sidebar_item.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sidebar_item_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sidebar_item_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function sidebar_item_image_default_styles() {
  $styles = array();

  // Exported image style: sidebar_image.
  $styles['sidebar_image'] = array(
    'label' => 'Sidebar image',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 270,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function sidebar_item_node_info() {
  $items = array(
    'sidebar_item' => array(
      'name' => t('Sidebar item'),
      'base' => 'node_content',
      'description' => t('Use <em>Sidebar items</em> for creating full-width images that direct users to either an internal part of the site or an external URLs. Useful for ads, <em>Subscribe Now</em> button, etc.'),
      'has_title' => '1',
      'title_label' => t('Administrative title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
