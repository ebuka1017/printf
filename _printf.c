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



/**
 * _putnbr - Print an integer to stdout
 * @n: The integer to print
 *
 * Return: Number of characters printed
 */
int _putnbr(int n)
{
	int count = 0;
	int digit, sign;

	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}

	if (n < 0)
	{
		sign = -1;
		count += _putchar('-');
	}
	else
	{
		sign = 1;
	}

	digit = n % 10;
	if (digit < 0)
		digit *= -1;

	count += _putnbr(n / 10);
	count += _putchar('0' + digit);

	return (count);
}

