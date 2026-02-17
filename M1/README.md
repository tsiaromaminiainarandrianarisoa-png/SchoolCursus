*This project has been created as part of the 42 curriculum by tsiarran.*

# Description

This project consists of implementing the function `printf` in order to :
- learn about using a variable number of arguments.
- improve programming skills.

Printf is a function that takes a variable number of arguments.  

That's why we use the macro va_list (the main new concept in this project).

# Instruction

As in libft, we use a Makefile in this project, just a reminder :
```
make : compiles all source files.
```
***Add :***
- `clean` : to delete object files.
- `fclean` : to delete object files and the library.
- `re` : to rebuild.

## Using library

- First, we include the library at the top of the source file (`#include "libftprintf.h"`).
- Then we create the library by `make`.
- Then compile your source file with the library.
    *For example* : `cc -Wall -Wextra -Werror main.c libftprintf.a`

# Resources

- 42 Libft subject:
  official project instructions.

- man pages:
  reference for standard C functions.

- Gitbook :
  used for hints when stuck.

- peer learning:
 discuss and review code with peers.

### Use of AI:

AI assistance was used to correct spelling mistakes and to improve clarity if necessary in this README.

# A detailed explanation

The implementation of ft_printf is based on parsing the format string character by character.

## Strategy

The algorithm iterates through the format string:

If the current character is not %, it is written directly to the output.

If the character is %, the next character is interpreted as a format specifier.

According to the specifier, the corresponding argument is retrieved using va_arg.

## Handling Variadic Arguments

The function uses:

- va_list.

- va_start.

- va_arg.

- va_end.

These macros allow access to a variable number of arguments in a controlled and portable way.

The argument type depends on the format specifier:

- %c → int

- %s → char *

- %d / %i → int

- %u → unsigned int

- %x / %X → unsigned int

- %p → void *

## Modularity

Each format specifier is handled by a dedicated function (for example):

ft_putchar

ft_putstr

ft_putdec

ft_puthex

ft_printptr


The project mainly relies on:

- The Format String

The format string itself acts as the main control structure of the algorithm. It determines:

When to print normally

When to extract and process arguments

- Variadic Argument List (va_list)

va_list is the core data structure that stores and manages the variable arguments.

It allows sequential access to each argument while preserving type safety when used correctly.