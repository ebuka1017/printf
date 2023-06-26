#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _putstr(char *str);
int _putnbr(int n);
int handle_specifier(char specifier, va_list args);

#endif

