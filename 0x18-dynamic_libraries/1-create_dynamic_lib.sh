#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o libball.so *.o
