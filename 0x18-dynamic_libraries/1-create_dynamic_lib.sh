#!/bin/bash

# Compile all .c files (excluding main.c) in the current directory into object files
gcc -Wall -fPIC -c $(ls *.c | grep -v 'main.c')

# Create the dynamic library liball.so
gcc -shared -o liball.so *.o

# Clean up: remove the object files

echo "Dynamic library liball.so has been created."

