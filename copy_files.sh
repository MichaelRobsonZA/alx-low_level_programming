#!/bin/bash

# create the target directory if it doesn't exist
mkdir -p 0x09-static_libraries

# find all the specified files in the current directory and its subdirectories,
# and copy them into the target directory
find . -name "0-isupper.c" -o \
       -name "0-memset.c" -o \
       -name "0-strcat.c" -o \
       -name "100-atoi.c" -o \
       -name "1-isdigit.c" -o \
       -name "1-memcpy.c" -o \
       -name "1-strncat.c" -o \
       -name "2-strchr.c" -o \
       -name "2-strlen.c" -o \
       -name "2-strncpy.c" -o \
       -name "3-islower.c" -o \
       -name "3-puts.c" -o \
       -name "3-strcmp.c" -o \
       -name "3-strspn.c" -o \
       -name "4-isalpha.c" -o \
       -name "4-strpbrk.c" -o \
       -name "5-strstr.c" -o \
       -name "6-abs.c" -o \
       -name "9-strcpy.c" | xargs -I{} cp {} 0x09-static_libraries/

