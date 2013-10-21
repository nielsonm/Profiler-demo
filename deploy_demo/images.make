; Base image module set
core = "7.x"
api = 2

projects[adaptive_image][version] = "1.4"

projects[caption_filter][download][branch] = "7.x-1.x"
projects[caption_filter][download][revision] = "c9794cf"
; http://drupal.org/node/1432092#comment-6014324
projects[caption_filter][patch][] = "http://drupal.org/files/caption-button-1432092-4.patch"

projects[file_entity][version] = "2.0-unstable7"

projects[image_resize_filter][version] = "1.13"

projects[media][version] = "2.0-unstable7"
; http://drupal.org/node/1278180#comment-5085370
projects[media][patch][] = "http://drupal.org/files/media-embed-library-resize.patch"

; Required for multiple file uploads via plupload at `file/add`.
projects[multiform][version] = "1.0"

projects[plupload][version] = "1.0"
; http://drupal.org/node/1476830#comment-6026232
projects[plupload][patch][] = "http://drupal.org/files/media-upload-widget--1476830-2.patch"

libraries[plupload][download][type] = "get"
libraries[plupload][download][url] = "http://cloud.github.com/downloads/moxiecode/plupload/plupload_1_5_1_1.zip"
libraries[plupload][download][destination] = "libraries"
libraries[plupload][download][directory_name] = "plupload"
