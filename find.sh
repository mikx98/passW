#!/bin/bash

make main ; make seed/hash ; make seed/find ; make seed/get_seed ; make seed/main

echo 'I am working ... please wait ...' ;

./seed/find < .actual | ./seed/main ;

rm main seed/main seed/find seed/get_seed ;
