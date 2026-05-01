*This project has been created as part of the 42 curriculum by nda-roch.*

## Description

**Libft** is the first project of the 42 school curriculum. The goal of this project is to create a personal C library by recoding a set of standard C library functions, along with additional utility functions that will be used in future projects.

## Instructions

### Compilation

The library is compiled using `cc` with the flags `-Wall -Wextra -Werror`. A **Makefile** is included to automate the process.

* To compile the library:

    ```bash
    make
    ```

* To remove object files:

    ```bash
    make clean
    ```

* To remove object files and the library:

    ```bash
    make fclean
    ```

* To remove everything and remake it:

    ```bash
    make re
    ```

### Usage

To use this library in your own project, include the header file in your code:

```c
#include "libft.h"
```

When compiling your project, link the library:

```bash
cc main.c -L. -lft
```

## Library Contents

The library is divided into three main sections:

### 1. Libc Functions

Recoded versions of standard functions:

* **Memory:** `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`.

* **Strings:** `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strnstr`, `strncmp`.

* **Types:** `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`.

* **Other:** `atoi`, `calloc`, `strdup`.

### 2. Additional Functions

Non-standard functions that are useful for string manipulation and memory:

* `ft_substr`: Extracts a substring from a string.

* `ft_strjoin`: Concatenates two strings into a new allocation.

* `ft_strtrim`: Trims specific characters from the start and end of a string.

* `ft_split`: Splits a string into an array of strings based on a delimiter.

* `ft_itoa`: Converts an integer to a string.

* `ft_strmapi` / `ft_striteri`: Apply functions to characters in a string.

* `ft_putchar_fd` / `ft_putstr_fd` / `ft_putendl_fd` / `ft_putnbr_fd`: Output functions.

### 3. Linked Lists

Functions to manipulate a singly linked list structure:

* `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

## Resources

### Documentation & References

* **Man Pages:** Primary reference for standard behavior.

* **Stack Overflow / Reddit:** Researching common edge cases and memory management pitfalls.

* **GitBook:** Used for community-driven explanations of each function how to structure them.

### Use of AI

AI was used as a collaborative peer throughout this project. Its specific tasks included:

* **Conceptual Guidance:** Assisting in understanding the theoretical logic behind complex functions like `ft_memmove` (overlap handling), `ft_split` (double pointers), and the list functions.

* **Debugging Assistance:** Providing targeted questions and hints when I was stuck on specific bugs.

* **Logic Review:** Reviewing my manual implementations to ensure they adhered to both the project requirements and the C standard.



