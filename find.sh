#!/bin/bash

if [ -f seed/.corrupt ] ; then
  echo 'FIXING CORRUPTIONS' ;
  ./fix.sh ;
  echo '...done' ;
fi

if [ "$1" = "" ] ; then
  echo 'You NEED to specify a (unique) name of the pass to re-solve. Try run as ./find.sh name';

  exit 1 ;
fi

if ! [ -f data/$1.pW ] || ! [ -f data/$1.conf ] ; then
  echo 'It seems like the pass you want to re-solve has no or corrupted data.' ;

  exit 1 ;
fi

touch seed/.corrupt ;

cp seed/.conf seed/.conf.backup ;
cp data/$1.conf seed/.conf ;

make main ; make seed/hash ; make seed/find ; make seed/get_seed ; make seed/main

echo 'I am working ... please wait ...' ;

cd seed ;

./find < ../data/$1.pW | ./main > .temp ;

while IFS= read -r poss
do
	../main <<< $poss
done < .temp

cd .. ;

mv seed/.conf.backup seed/.conf ;

rm -f seed/.corrupt seed/.temp main seed/main seed/find seed/get_seed seed/hash ;
