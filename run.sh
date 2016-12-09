#!/bin/bash

if [ -f seed/.corrupt ] ; then
  echo 'FIXING CORRUPTIONS' ;
  ./fix.sh ;
  echo '...done' ;
fi

if [ ! -d "data" ] ; then
  mkdir data ;
fi

if [ "$1" = "" ] ; then
  echo 'You NEED to specify a (unique) name of the pass. Try run as ./run.sh name';

  exit 1 ;
fi

if [ -f data/$1.solved ] ; then
  echo 'Retrieving your old password: ' ;
  ./find.sh $1 ;
fi

rm -f data/$1.solved ;

touch seed/.corrupt ;

make main ; make seed/hash ; make seed/find ; make seed/get_seed ; make seed/main

cd seed ;

echo 'Enter some random big number: ' ;

./get_seed > .secret ;

echo 'Please change your password (' $1 ') to this: ' ;
./../main < .secret ;

./hash < .secret | ./main > ../data/$1.pW ;
cp .conf ../data/$1.conf

cd .. ;

rm -f seed/.corrupt seed/.secret main seed/main seed/find seed/get_seed seed/hash ;
