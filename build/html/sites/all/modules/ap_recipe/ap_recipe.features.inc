<?php
/**
 * @file
 * ap_recipe.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ap_recipe_node_info() {
  $items = array(
    'recipe' => array(
      'name' => t('recipe'),
      'base' => 'node_content',
      'description' => t('A recipe.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
