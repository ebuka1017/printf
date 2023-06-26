#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - custom printf function
 * @format: format string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				count += _putchar('%');
			else
			{
				count += handle_specifier(*format, args);
			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}


/**
 * handle_specifier - handle conversion specifier
 * @specifier: the conversion specifier character
 * @args: va_list args
 *
 * Return: number of chars printed
 */

int handle_specifier(char specifier, va_list args)
{
	switch (specifier)
	{
		case 'c':
			return (_putchar(va_arg(args, int)));
		case 's':
			return (_putstr(va_arg(args, char *)));
		case 'd':
		case 'i':
			return (_putnbr(va_arg(args, int)));
		default:
			_putchar('%');
			_putchar(specifier);
			return (2);
	}
}

