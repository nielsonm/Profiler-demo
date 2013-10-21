<?php
/**
 * @file
 * deploy_demo_demo_content.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function deploy_demo_demo_content_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'deploy_auto_plan_name';
  $strongarm->value = 'demo_content';
  $export['deploy_auto_plan_name'] = $strongarm;

  return $export;
}
