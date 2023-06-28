#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _putstr(char *str);
int _putnbr(int n);
int _putbin(unsigned int n);
int specifier(const char *format, va_list args);
int _unsined(unsigned int n);
int _putoctal(unsigned int n);
int _puthex(unsigned int n, int upper);
int _puts(char *str);
int _putptr(void *ptr);

#endif

