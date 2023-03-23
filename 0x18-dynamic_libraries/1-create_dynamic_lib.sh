#!/bin/bash
gcc -Wall -Wextra -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIIBRARY_PATH=.:$LD_LIBRARY_PATH
