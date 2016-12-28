#!/bin/bash

showPass () {
  while IFS= read -r poss
  do
    ./"$1" <<< $poss
  done < "$2"
}

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

make main ; make seed/main ;

if [ -f data/$1.solved ] ; then
  echo 'Well it seems that you already re-solved this one...' ;
  
  showPass main data/$1.solved ;

  ./fix.sh ;

  exit ;
fi

touch seed/.corrupt ;

cp seed/.conf seed/.conf.backup ;
cp data/$1.conf seed/.conf ;

echo 'I am working ... please wait ...' ;

cd seed ;

python3 find.py < ../data/$1.pW | ./main > .temp ;

showPass ../main .temp ;

cd .. ;

cp seed/.temp data/$1.solved ;

mv seed/.conf.backup seed/.conf ;

./fix.sh ;
