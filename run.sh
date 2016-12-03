#!/bin/bash

make main ; make seed/hash ; make seed/find ; make seed/get_seed ; make seed/main

cd seed ;

clear ;
echo 'Enter some random big number: ' ;

./get_seed > .secret ;

echo 'Please change your password to this: ' ;
./../main < .secret ;

./hash < .secret | ./main > .actual ;

cd .. ;

rm seed/.secret main seed/main seed/find seed/get_seed seed/hash ;
