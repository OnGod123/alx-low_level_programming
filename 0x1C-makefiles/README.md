#makefile Usage Guide

## Introduction
Makefiles are a powerful tool for managing the compilation process of software projects. They automate the process of compiling source code into executable programs, handling dependencies, and facilitating clean-up tasks. This guide provides an overview of Makefiles and how to use them effectively in your projects.

## What is a Makefile?
A Makefile is a text file containing a set of rules used by the make utility to build and manage a project. Each rule specifies a target, dependencies, and actions to be performed. By default, make looks for a file named Makefile or makefile in the current directory to determine how to build the project.

## Anatomy of a Makefile
A typical Makefile consists of several components:

1. Variables: Define variables such as compiler, compiler flags, source files, object files, and executable name.
2. Rules: Specify rules to build the executable, compile source files into object files, and perform clean-up tasks.
3. Targets: Define targets such as `all`, `clean`, `oclean`, `fclean`, and `re` to build the executable, clean temporary files, remove object files, and force recompilation.
4. Comments: Include comments to document the purpose of each section and provide guidance to users.

## How to Use a Makefile
1. **Building the Executable**: Run `make` command to build the executable. This will compile the source files into object files and link them together to create the executable.

2. **Cleaning**: Run `make clean` to delete Emacs and Vim temporary files along with the executable.

3. **Removing Object Files**: Run `make oclean` to delete the object files.

4. **Full Cleaning**: Run `make fclean` to delete all Emacs and Vim temporary files, the executable, and the object files.

5. **Forcing Recompilation**: Run `make re` to force recompilation of all source files.

## Example Makefile
# Compiler
CC = gcc

# Source files
SRC = main.c school.c

# Object files
OBJ = $(SRC:.c=.o)

# Name of the executable
NAME = school

# Program to delete files
RM = rm -f

# Compiler flags
CFLAGS = -Wall -Werror -Wextra -pedantic

# Rule to build the executable
all: $(NAME)

# Rule to compile source files into object files
%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

# Rule to link object files into executable
$(NAME): $(OBJ)
    $(CC) $(OBJ) -o $(NAME)

# Rule to remove all Emacs and Vim temporary files along with the executable
clean:
    $(RM) *~ $(NAME)

# Rule to delete the object files
oclean:
    $(RM) $(OBJ)

# Rule to delete all Emacs and Vim temporary files, the executable, and the object files
fclean: clean oclean

# Rule to force recompilation of all source files
re: fclean all

.PHONY: all clean oclean fclean re
## Conclusion
Makefiles are an essential tool for managing software projects efficiently. By defining rules and targets in a Makefile, developers can automate the build process and streamline project maintenance tasks. With the knowledge gained from this guide, you can create and use Makefiles effectively in your projects.

