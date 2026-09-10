*This activity has been created as part of the 42 curriculum by mumansou.*

# Description

Libft is a foundational C project from the 42 curriculum where the goal is to build your own static C library.

This library reimplements a set of standard libc functions and adds additional utility functions, including linked list manipulation.

The main purpose of this project is to deeply understand how common C functions work internally, improve memory management skills, and create a reusable library for future projects.

The output of this project is a static library called libft.a.

# Instructions

## Compilation

To compile the library, run:

make

This will generate the file libft.a at the root of the repository.

## Makefile Rules

The Makefile includes the following rules:

- make or make all: compile the library
- make bonus: compile the library with bonus functions
- make clean: remove object files
- make fclean: remove object files and libft.a
- make re: rebuild the library from scratch

All files are compiled using the flags:

-Wall -Wextra -Werror

## Usage

To use the library in your project:

#include "libft.h"

Then compile your program with:

cc main.c libft.a -o test

And run it with:

./test

# Library Content

The library is composed of three main parts:

## 1. Libc Functions Reimplementation

Reimplementation of standard C library functions, all prefixed with ft_, such as:

Character checks:
ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint

String functions:
ft_strlen, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr

Memory functions:
ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp

Conversion and case:
ft_atoi, ft_toupper, ft_tolower

Allocation-based functions:
ft_calloc, ft_strdup

## 2. Additional Utility Functions

Functions not present in libc or implemented differently:

String manipulation:
ft_substr, ft_strjoin, ft_strtrim, ft_split

Conversion:
ft_itoa

Iteration helpers:
ft_strmapi, ft_striteri

File descriptor output:
ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

## 3. Linked List Functions

A full set of functions to manipulate singly linked lists using the t_list structure:

Creation and insertion:
ft_lstnew, ft_lstadd_front, ft_lstadd_back

Navigation:
ft_lstsize, ft_lstlast

Deletion and cleanup:
ft_lstdelone, ft_lstclear

Iteration and mapping:
ft_lstiter, ft_lstmap

# Technical Notes

- No global variables are used.
- Memory is handled carefully and allocated memory is freed when required.
- Helper functions are declared as static when needed.
- The library is built using ar, as required.

# Resources

- man pages for standard C library functions
- GNU C Library Documentation
- 42 Intranet documentation for the libft project

## AI Usage

AI was used only as a learning support tool to:

- Clarify function behavior and edge cases
- Review explanations and documentation structure

No code was blindly copied, and all implementations were written and understood by the author.

# Author

Mu'taz Mansour
42 Student