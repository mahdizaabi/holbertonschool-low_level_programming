#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC *.c -shared -o liball.so
