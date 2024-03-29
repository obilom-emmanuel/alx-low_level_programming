#!/bin/bash

gcc -c 0-isupper.c -o 0-isupper.o
gcc -c 0-strcat.c -o 0-strcat.o
gcc -c 1-isdigit.c -o 1-isdigit.o
gcc -c 1-strncat.c -o 1-strncat.o
gcc -c 2-strlen.c -o 2-strlen.o
gcc -c 3-islower.c -o 3-islower.o
gcc -c 3-strcmp.c -o 3-strcmp.o
gcc -c 4-isalpha.c -o 4-isalpha.o
gcc -c 5-strstr.c -o 5-strstr.o
gcc -c 9-strcpy.c -o 9-strcpy.o
gcc -c 0-memset.c -o 0-memset.o
gcc -c 100-atoi.c -o 100-atoi.o
gcc -c 1-memcpy.c -o 1-memcpy.o
gcc -c 2-strchr.c -o 2-strchr.o
gcc -c 2-strncpy.c -o 2-strncpy.o
gcc -c 3-puts.c -o 3-puts.o
gcc -c 3-strspn.c -o 3-strspn.o
gcc -c 4-strpbrk.c -o 4-strpbrk.o
gcc -c 6-abs.c -o 6-abs.o
gcc -c _putchar.c -o _putchar.o

ar -rc libmy.a 0-isupper.o  0-strcat.o  1-isdigit.o  1-strncat.o  2-strlen.o   3-islower.o  3-strcmp.o  4-isalpha.o  5-strstr.o  9-strcpy.o   0-memset.o   100-atoi.o  1-memcpy.o   2-strchr.o   2-strncpy.o  3-puts.o     3-strspn.o  4-strpbrk.o  6-abs.o     _putchar.o

rm -f 0-isupper.o  0-strcat.o  1-isdigit.o  1-strncat.o  2-strlen.o   3-islower.o  3-strcmp.o  4-isalpha.o  5-strstr.o  9-strcpy.o  0-memset.o   100-atoi.o  1-memcpy.o   2-strchr.o   2-strncpy.o  3-puts.o     3-strspn.o  4-strpbrk.o  6-abs.o     _putchar.o

echo "Static library libmy.a created successfully!"
