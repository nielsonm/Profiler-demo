; Demo content makefile for Deploy-UUID based demo content.
core = "7.x"
api = 2

; Deploy
projects[deploy][subdir] = "development"
projects[deploy][version] = "2.0-alpha2"

; Entity API
projects[entity][subdir] = "development"
projects[entity][version] = "1.2"

; Entity Dependency API
projects[entity_dependency][subdir] = "development"
projects[entity_dependency][download][branch] = "7.x-1.x"
projects[entity_dependency][download][revision] = "7ca711a"

; Entity Menu Links
projects[entity_menu_links][subdir] = "development"
projects[entity_menu_links][download][branch] = "7.x-1.x"
projects[entity_menu_links][download][revision] = "9dd1dd7"

; UUID
projects[uuid][subdir] = "development"
projects[uuid][version] = "1.0-alpha5"
;; Patching for UUIDs not resolved/ignored properly on presave/insert.
;; https://drupal.org/node/1390708#comment-7525819
;; NOTE: This patch allows us to export field collections except if the FC
;; contains an entity refererence. Use discretion when deciding to use This
;; patch or not.
;; projects[uuid][patch][] = "https://drupal.org/files/1390708-10-uuid-field-insert.patch"


