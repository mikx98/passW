#!/bin/bash

make main ; make seed/hash ; make seed/find ; make seed/get_seed ; make seed/main

echo 'I am working ... please wait ...' ;

cd seed ;

./find < .actual | ./main > .temp ;

while IFS= read -r poss
do
	../main <<< $poss
done < .temp

cd .. ;

rm seed/.temp main seed/main seed/find seed/get_seed seed/hash ;
