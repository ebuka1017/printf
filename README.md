# Custom Printf Function (_printf)

![printf](https://cdn.hashnode.com/res/hashnode/image/upload/v1669568174223/gJoaXPx9k.jpg?w=1600&h=840&fit=crop&crop=entropy&auto=compress,format&format=webp )

This is a custom implementation of the printf function in C, named `_printf`. It allows you to print formatted output to the standard output (stdout) or any other output stream you choose. It supports various format specifiers similar to the standard `printf` function.

## Files:

- `main.h`: Header file containing function prototypes and necessary includes.

- `funcs0.c`: Contains helper functions for printing characters, strings, integers, binary, octal, hexadecimal, pointers, and special cases like % and invalid format specifiers.

- `funcs1.c`: Contains additional helper functions for handling unsigned integers and hexadecimal printing.

- `_printf.c`: Contains the custom `_printf` function that handles parsing the format string and calling the appropriate helper functions to print the formatted output.

## How to Use:

1. Include the `main.h` header file in your C program.

2. Call the `_printf` function with the format string and any additional arguments as needed.

3. Use format specifiers to control the output formatting. The supported format specifiers are:

   - `%c`: Print a single character.
   - `%s`: Print a null-terminated string.
   - `%d` or `%i`: Print a signed integer.
   - `%b`: Print an unsigned integer in binary.
   - `%u`: Print an unsigned integer.
   - `%o`: Print an unsigned integer in octal.
   - `%x`: Print an unsigned integer in lowercase hexadecimal.
   - `%X`: Print an unsigned integer in uppercase hexadecimal.
   - `%S`: Print a string, replacing non-printable characters with `\x` followed by the hexadecimal value.
   - `%p`: Print a pointer address in hexadecimal format.
   - `%%`: Print a literal '%' character.

4. The function returns the number of characters printed.

## Example Usage:

```c
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```

Please note that this is a simplified custom implementation of the printf function and may not cover all the edge cases or advanced features of the standard printf function. It serves as a basic example to understand how printf-like functions can be created. For production use, it is recommended to use the standard library's `printf` function.


**Author:** Isaac Okwuzi (ebuka1017) <br>
**Organization:** alx_africa <br>
**Date:** June, 2023
