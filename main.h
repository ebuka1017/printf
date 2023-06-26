#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * _printf - Custom printf
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...);

/**
 * _putchar - prints character to standard output
 * @c: character to print
 *
 * Return: 0 or 1
 */
int _putchar(char c);

/**
 * _putstr - writes a string to standard output
 * @str: string to write
 *
 * Return: number of characters written
 */
int _putstr(char *str);

/**
 * print_char - prints a character
 * @args: va_list containing the character argument
 *
 * Return: number of arguments printed
 */
int print_char(va_list args);

/**
 * print_string - prints a string
 * @args: va_list containing the character argument
 *
 * Return: number of arguments printed
 */
int print_string(va_list args);

/**
 * print_percent - prints a percent character
 * @args: the va_list (unused)
 *
 * Return: number of characters printed always (1)
 */
int print_percent(va_list args);

/**
 * process_format_specifier - Process the format specifier and call the
 * corresponding printing function.
 * @specifier: The format specifier character.
 * @args: The va_list containing the function arguments.
 *
 * Return: The number of characters printed.
 */
int process_format_specifier(char specifier, va_list args);

/**
 * handle_unknown_specifier - Handle unknown format specifier by printing
 * a percent sign followed by the specifier character.
 * @specifier: The unknown format specifier character.
 *
 * Return: The number of characters printed.
 */
int handle_unknown_specifier(char specifier);

#endif

