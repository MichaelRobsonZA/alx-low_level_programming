#!/bin/bash
# Compile all C files into object files
gcc -c *.c
# Archive the object files into a static library
ar rc libmy.a *.o
# Index the library for faster linking
ranlib libmy.a
