*This project has been created as part of the 42 curriculum by tsiarran.*

# Description

Libft is a project from the 42 curriculum that aims to recreate a set of standard C library functions, along with additional useful functions for handling strings and linked lists.

The goal of this project is to understand how these functions work under the hood, practice memory management, and build a reusable library that can be used in future projects.

# Instructions

Makefile allows compiling all source files at once.  

So we run :
- `make` : to compile the library, this will generate the static libft.a.
- `make clean` : to remove object files.
- `make fclean` : to remove object files and the library.
- `make re` : to recompile everything.

### Using library :

Include the header in your C files : `#include "libft.h"`

When compiling your program, link against libft.a and specify the header location.  
**eg**: `cc main.c -L. -lft -I./ -o my_program` (if main.c is the same directory as libft.a and libft.h)

- `-L.` tells the compiler to `look for libraries in the current directory`.

- `-lft` links against libft.a `(libft.a → -lft)`.

- `-I./` tells the compiler `where to find the header files` (libft.h).

# Resources

- 42 Libft subject:
  official project instructions.

- man pages:
  reference for standard C functions.

- gitbook :
  used for hints when stuck.

- peer learning:
 discuss and review code with peers.

### Use of AI:

AI assistance was used only to help clarify concepts and explain standard function behavior.

# Library Overview

The Libft library is a custom C library that reimplements a set of standard C library functions and adds additional helper functions for strings, memory, and linked list manipulation.

## Key Features :

- `Memory functions` – ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc

- `String functions` – ft_strlen, ft_strchr, ft_strrchr, ft_strdup, ft_strncmp, ft_strnstr, ft_strlcpy, ft_strlcat, ft_strjoin, ft_strtrim, ft_substr, ft_split, ft_itoa, ft_atoi, ft_strmapi, ft_striteri

- `Character checks and conversions` – ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower

- `Linked list functions` – ft_lstnew, ft_lstadd_front, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap, ft_lstlast, ft_lstsize

## Purpose :

- Provides a reusable library that can be included in future projects.

- Helps understand how standard functions work internally, including memory management and pointer operations.

- Implements safe memory handling in dynamic allocations (e.g., ft_calloc, ft_split) and string manipulation.

- Serves as a foundation for more complex projects in the 42 curriculum.