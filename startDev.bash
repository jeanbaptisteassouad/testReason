#!/bin/bash

watch() {
  echo $1;
  while inotifywait -r -e modify,create,delete /mnt;
  do rsync --delete -av /mnt/$1/ /usr/src/app/$1/;
  done
}

watch src &
watch static &

# python -m SimpleHTTPServer 8000 &
#
# npm run-script watchBuildDev

bash
