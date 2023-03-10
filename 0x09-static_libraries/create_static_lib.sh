#!/bin/bash

# compile each .c file into a corresponding .o file
for file in *.c
do
    gcc -Wall -pedantic -Werror -Wextra -c "$file"
done

# create the static library from all the .o files
ar rcs liball.a *.o

