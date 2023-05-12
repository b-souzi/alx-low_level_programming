#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c 0-*.c 100-*.c 1-*.c 2-*.c 3-*.c 4-*.c 5-*.c 6-*.c 9-*.c _*.c
ar -rc libmy.a *.o
ranlib libmy.a
