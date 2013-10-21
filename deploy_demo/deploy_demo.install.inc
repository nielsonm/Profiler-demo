<?php
/**
 * @file
 */

/**
 * Helper function to deploy demo content originating from UUID export.
 */
function _deploy_demo_install_uuid_content() {
  // Gather up the modules we need for content deployment along with the
  // content export feature. All the necessary dependencies should be
  // dependencies of the demo content feature.
  $deployment_modules = array('deploy_demo_demo_content');

  if (!module_enable($deployment_modules)) {
    throw new Exception("Installer error: Unable to enable modules.");
  }
  // Revert the demo content feature.
  features_revert(array(
    'deploy_demo_demo_content' => array(
      'strongarm',
      'deploy_plans',
      'uuid_entities',
    ),
  ));

  // Rebuild the menu so the imported links show up.
  menu_rebuild();

  // Flush all caches so content appears for later tasks.
  drupal_flush_all_caches();

}
