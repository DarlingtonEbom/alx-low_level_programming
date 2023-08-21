#!/bin/bash
gcc -FPIC -c *.c
gcc -shared *.o -o liball.so
