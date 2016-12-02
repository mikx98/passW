#!/bin/bash

make main ; make seed/hash ; make seed/find ; make seed/get_seed ; make seed/main

echo 'Enter some random big number: ' ;
./seed/get_seed > .secret ;
main < .secret ;

./seed/hash < .secret | ./seed/main > .actual ;

rm .secret main seed/main seed/find seed/get_seed ;
