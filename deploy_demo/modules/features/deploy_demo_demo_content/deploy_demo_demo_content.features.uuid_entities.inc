<?php
/**
 * @file
 * deploy_demo_demo_content.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function deploy_demo_demo_content_uuid_default_entities() {
  $entities = array();

  $entities['demo_content'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/3471e019-2fd2-4911-b37d-3f4525c20096',
      'cause' => 'menu_link/f0716af9-fb80-4413-9d80-a7eb342f00af',
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => NULL,
          'value' => 'PLACEHOLDER',
        ),
      ),
    ),
    'comment' => 0,
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'About',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'page',
    'uid' => 1,
    'uuid' => '3471e019-2fd2-4911-b37d-3f4525c20096',
  );
  $entities['demo_content'][] = (object) array(
    '__metadata' => array(
      'type' => 'menu_link',
      'uri' => 'menu_link/f0716af9-fb80-4413-9d80-a7eb342f00af',
      'cause' => FALSE,
    ),
    'access' => TRUE,
    'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
    'access_callback' => 'node_access',
    'context' => 0,
    'customized' => 0,
    'default_revision' => 1,
    'delivery_callback' => '',
    'depth' => 1,
    'description' => '',
    'expanded' => 0,
    'external' => 0,
    'fit' => 2,
    'has_children' => 1,
    'hidden' => 0,
    'href' => 'node/2',
    'include_file' => '',
    'link_path' => 'node/3471e019-2fd2-4911-b37d-3f4525c20096',
    'link_title' => 'About',
    'load_functions' => array(
      1 => 'node_load',
    ),
    'localized_options' => array(),
    'menu_name' => 'main-menu',
    'module' => 'menu',
    'number_parts' => 2,
    'options' => array(),
    'p1' => 'f0716af9-fb80-4413-9d80-a7eb342f00af',
    'p2' => 0,
    'p3' => 0,
    'p4' => 0,
    'p5' => 0,
    'p6' => 0,
    'p7' => 0,
    'p8' => 0,
    'p9' => 0,
    'page_arguments' => 'a:1:{i:0;i:1;}',
    'page_callback' => 'node_page_view',
    'path' => 'node/%',
    'plid' => 0,
    'position' => '',
    'rdf_mapping' => array(),
    'router_path' => 'node/%',
    'tab_parent' => '',
    'tab_root' => 'node/%',
    'theme_arguments' => 'a:0:{}',
    'theme_callback' => '',
    'title' => 'About',
    'title_arguments' => 'a:1:{i:0;i:1;}',
    'title_callback' => 'node_page_title',
    'to_arg_functions' => '',
    'type' => 6,
    'uuid' => 'f0716af9-fb80-4413-9d80-a7eb342f00af',
    'weight' => 0,
  );
  $entities['demo_content'][] = (object) array(
    '__metadata' => array(
      'type' => 'menu_link',
      'uri' => 'menu_link/fa96fea7-aaac-485f-a2b7-210933d2c3fb',
      'cause' => FALSE,
    ),
    'access' => TRUE,
    'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
    'access_callback' => 'node_access',
    'context' => 0,
    'customized' => 0,
    'default_revision' => 1,
    'delivery_callback' => '',
    'depth' => 2,
    'description' => '',
    'expanded' => 0,
    'external' => 0,
    'fit' => 2,
    'has_children' => 1,
    'hidden' => 0,
    'href' => 'node/2',
    'include_file' => '',
    'link_path' => 'node/3471e019-2fd2-4911-b37d-3f4525c20096',
    'link_title' => 'About Us',
    'load_functions' => array(
      1 => 'node_load',
    ),
    'localized_options' => array(),
    'menu_name' => 'main-menu',
    'module' => 'menu',
    'number_parts' => 2,
    'options' => array(),
    'p1' => 'f0716af9-fb80-4413-9d80-a7eb342f00af',
    'p2' => 'fa96fea7-aaac-485f-a2b7-210933d2c3fb',
    'p3' => 0,
    'p4' => 0,
    'p5' => 0,
    'p6' => 0,
    'p7' => 0,
    'p8' => 0,
    'p9' => 0,
    'page_arguments' => 'a:1:{i:0;i:1;}',
    'page_callback' => 'node_page_view',
    'path' => 'node/%',
    'plid' => 'f0716af9-fb80-4413-9d80-a7eb342f00af',
    'position' => '',
    'rdf_mapping' => array(),
    'router_path' => 'node/%',
    'tab_parent' => '',
    'tab_root' => 'node/%',
    'theme_arguments' => 'a:0:{}',
    'theme_callback' => '',
    'title' => 'About Us',
    'title_arguments' => 'a:1:{i:0;i:1;}',
    'title_callback' => 'node_page_title',
    'to_arg_functions' => '',
    'type' => 6,
    'uuid' => 'fa96fea7-aaac-485f-a2b7-210933d2c3fb',
    'weight' => 0,
  );
  $entities['demo_content'][] = (object) array(
    '__metadata' => array(
      'type' => 'menu_link',
      'uri' => 'menu_link/fe990b9b-50a8-4250-9a23-0363993c54d9',
      'cause' => FALSE,
    ),
    'access' => TRUE,
    'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
    'access_callback' => 'node_access',
    'context' => 0,
    'customized' => 0,
    'default_revision' => 1,
    'delivery_callback' => '',
    'depth' => 3,
    'description' => '',
    'expanded' => 0,
    'external' => 0,
    'fit' => 2,
    'has_children' => 0,
    'hidden' => 0,
    'href' => 'node/2',
    'include_file' => '',
    'link_path' => 'node/3471e019-2fd2-4911-b37d-3f4525c20096',
    'link_title' => 'About Me',
    'load_functions' => array(
      1 => 'node_load',
    ),
    'localized_options' => array(),
    'menu_name' => 'main-menu',
    'module' => 'menu',
    'number_parts' => 2,
    'options' => array(),
    'p1' => 'f0716af9-fb80-4413-9d80-a7eb342f00af',
    'p2' => 'fa96fea7-aaac-485f-a2b7-210933d2c3fb',
    'p3' => 'fe990b9b-50a8-4250-9a23-0363993c54d9',
    'p4' => 0,
    'p5' => 0,
    'p6' => 0,
    'p7' => 0,
    'p8' => 0,
    'p9' => 0,
    'page_arguments' => 'a:1:{i:0;i:1;}',
    'page_callback' => 'node_page_view',
    'path' => 'node/%',
    'plid' => 'fa96fea7-aaac-485f-a2b7-210933d2c3fb',
    'position' => '',
    'rdf_mapping' => array(),
    'router_path' => 'node/%',
    'tab_parent' => '',
    'tab_root' => 'node/%',
    'theme_arguments' => 'a:0:{}',
    'theme_callback' => '',
    'title' => 'About Me',
    'title_arguments' => 'a:1:{i:0;i:1;}',
    'title_callback' => 'node_page_title',
    'to_arg_functions' => '',
    'type' => 6,
    'uuid' => 'fe990b9b-50a8-4250-9a23-0363993c54d9',
    'weight' => 0,
  );
  $entities['demo_content'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/f9815fb0-595e-4b80-aefa-cfe823677ed1',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => NULL,
          'value' => 'PLACEHOLDER',
        ),
      ),
    ),
    'comment' => 0,
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'About Us',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'page',
    'uid' => 1,
    'uuid' => 'f9815fb0-595e-4b80-aefa-cfe823677ed1',
  );
  $entities['demo_content'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/e8f088ab-2324-48d7-9c7d-4e00baacba28',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>PLACEHOLDER</p>',
        ),
      ),
    ),
    'comment' => 0,
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'About Me',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'page',
    'uid' => 1,
    'uuid' => 'e8f088ab-2324-48d7-9c7d-4e00baacba28',
  );

  return $entities;
}
