#!/bin/bash
gcc -Wall -pendantic -Werror -Wextra -std=gnu89 -c *.c
ar -rc liball.a *.o
ranlib liball.a
