#!/bin/bash
gcc -c -fPIC *.c
git -shared *.o -o liball.so
