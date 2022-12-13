#!/bin/bash
gcc -g -fPIC -Wall -Werror -Wextra -pedantic *.c -shared -o liball.so
export LD_PRELOAD=/tmp/libmask.so
