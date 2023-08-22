#!/bin/bash
gcc -fPIC -c src/*.c
gcc -shared -o libdynamic.so *.o
rm *.o
