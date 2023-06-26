/* SUPPORT FUNCTIONS */

#include "main.h"

/**
 * print_char - prints a character
 * @args: The va_list containing the character argument
 *
 * Return: number of characters printed
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * print_string - prints a string
 * @args: The va_list containing the string argument
 *
 * Return: number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);

	return (_putstr(str));
}

/**
 * print_percent - prints a percent character 
 * @args: The va_list (unused)
 *
 * Return: number of characters printed
 */
int print_percent(va_list args)
{
	(void)args;

	write(1, "%%", 1);

	return (1);
}

