#!/bin/bash

if [ ! -d "data" ] ; then
  mkdir data ;
fi

if [ "$1" = "" ] ; then
  echo 'You NEED to specify a (unique) name of the pass. Try run as ./run.sh name';

  exit 1 ;
fi

make main ; make seed/hash ; make seed/find ; make seed/get_seed ; make seed/main

cd seed ;

clear ;
echo 'Enter some random big number: ' ;

./get_seed > .secret ;

echo 'Please change your password (' $1 ') to this: ' ;
./../main < .secret ;

./hash < .secret | ./main > ../data/$1.pW ;
cp .conf ../data/$1.conf

cd .. ;

rm seed/.secret main seed/main seed/find seed/get_seed seed/hash ;
