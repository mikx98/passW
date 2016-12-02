#!/bin/bash

make main ; make hash ; make find ; make get_seed ; make ../main

echo 'zadaj nahodne velke cislo: ' ;
./get_seed > .secret ;
../main < .secret ;

./hash < .secret | ./main > .actual ;

rm .secret main ../main find get_seed ;
