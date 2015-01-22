<?php
/**
 *
 */

/**
 * Implements hook_entity_field_reference_plugins().
 */
function entity_field_reference_entity_field_reference_plugins() {
  return array(
    'style' => array(
      'default' => array(
        'title' => t('Unformatted list'),
        'class name' => 'EntityFieldReferenceUnformattedStylePlugin',
        'file path' => 'plugins',
      ),
      'list' => array(
        'title' => t('HTML List'),
      ),
      'grid' => array(
        'title' => t('Grid'),
      ),
      'table' => array(
        'title' => t('Title'),
      ),
    ),
  );
}

/**
 * Base class for Entity Field Reference plugins.
 */
class EntityFieldReferencePlugin {
  private $name;

  public function __construct() {

  }

  final public function getName() {
    return $this->name;
  }
}
