# 0x18. C - Dynamic libraries

## Description

This repository contains a collection of C programs and dynamic libraries created as part of the "0x18. C - Dynamic libraries" project for [Holberton School](https://www.holbertonschool.com/).

The project focuses on the creation and use of dynamic libraries in the C programming language.

## Directories and Files

- `0-libholberton.so` - A shared library containing various utility functions.
- `1-create_dynamic_lib.sh` - A shell script to create a dynamic library from all `.c` files in the current directory.
- `100-operations.so` - A shared library containing mathematical operations for use in the `100-main_op.c` program.
- `100-main_op.c` - A program that demonstrates the use of the `100-operations.so` shared library.
- `101-make_me_win.so` - A shared library for an advanced task (if applicable).
- `main.h` - A header file with function prototypes for the libraries and programs.
- `README.md` - This file.

## Usage

1. Compilation of shared libraries and programs can be done using the `gcc` compiler.

2. To create a dynamic library from all `.c` files in the current directory, use the provided script:

   ```bash
   ./1-create_dynamic_lib.sh

