#!/bin/bash
gcc -Wall -Wextra -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD-LIIBRARY_PATH=.:$LD_LIBRARY_PATH
