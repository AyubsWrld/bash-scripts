#!/usr/sbin/bash

CopyContents() {
  source=$1
  dest=$2
  cat ${source} | xclip
  xclip -o >>${dest}
}

CopyContents $1 $2
