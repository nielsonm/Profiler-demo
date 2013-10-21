<?php
/**
 * @file
 * deploy_demo_demo_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function deploy_demo_demo_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "deploy" && $api == "deploy_plans") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
