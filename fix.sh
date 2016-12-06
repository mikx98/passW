#!/bin/bash

if [ -f seed/.conf.backup ] ; then
  mv seed/.conf.backup seed/.conf ;
fi

rm -f seed/.corrupt seed/.temp seed/.secret main seed/main seed/find seed/get_seed seed/hash ;