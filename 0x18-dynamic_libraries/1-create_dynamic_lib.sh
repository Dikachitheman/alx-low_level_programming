#!/bin/bash
gcc -fpic -c *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
