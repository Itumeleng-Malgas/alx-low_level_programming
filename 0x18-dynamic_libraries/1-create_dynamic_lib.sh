#!/bin/bash
gcc -Wall -Wextra -Werror -pendantic -fPIC -c *.c
gcc -shared -o libball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
