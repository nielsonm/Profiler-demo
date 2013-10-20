; Demo content makefile for Deploy-UUID based demo content.
core = "7.x"
api = 2

; Entity Dependency API
projects[entity_dependency][subdir] = "development"
projects[entity_dependency][download][branch] = "7.x-1.x"
projects[entity_dependency][download][revision] = "7ca711a"

; UUID
projects[uuid][subdir] = "development"
projects[uuid][version] = "1.0-alpha5"
;; Patching for UUIDs not resolved/ignored properly on presave/insert.
;; https://drupal.org/node/1390708#comment-7525819
;; NOTE: This patch allows us to export field collections except if the FC
;; contains an entity refererence. Use discretion when deciding to use This
;; patch or not.
;; projects[uuid][patch][] = "https://drupal.org/files/1390708-10-uuid-field-insert.patch"

; Deploy
projects[deploy][subdir] = "development"
projects[deploy][version] = "2.0-alpha2"
