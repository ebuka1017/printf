/*helper_functions*/

#include <unistd.h>
#include "main.h"
#include <stdarg.h>

/**
 * _putchar - prints char to standard output
 *
 * @c: char to compare
 *
 * Return: char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putstr - writes str to stdo
 *
 * @str: str
 *
 * Return: len
 */

int _putstr(char *str)
{
	int len = 0;
	char *ptr = str;

	while (*ptr != '\0')
	{
		len += _putchar(*ptr);
		ptr++;
	}

	return (len);
}


/**
 * _putnbr - Print an integer to stdout
 * @n: The integer to print
 *
 * Return: Number of characters printed
 */
int _putnbr(int n)
{
	int i = 0;
	int base = 10;
	int count = 0;
	int digit[10];

	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}

	while (n > 0)
	{
		digit[i] = n % base;
		n /= base;
		i++;
	}

	while (i > 0)
	{
		i--;
		count += _putchar('0' + digit[i]);
	}

	return (count);
}

/**
 * _putbin - converts unsigned int to binary
 * @n: int to convert
 *
 * Return: converted bin
 */

int _putbin(unsigned int n)
{
	int count = 0;

	if (n >= 2)
	{
		count += _putbin(n / 2);
	}

	count += _putchar('0' + (n % 2));

	return (count);
}

/**
 * specifier - handles the switch case logic for specifiers
 * @format: format string
 * @args: va_list of args
 *
 * Return: number of characters printed
 */

int specifier(const char *format, va_list args)
{
	int count = 0;

	switch (*format)
	{
		case 'c':
			count += _putchar(va_arg(args, int));
			break;
		case 's':
			count += _putstr(va_arg(args, char *));
			break;
		case 'd':
		case 'i':
			count += _putnbr(va_arg(args, int));
			break;
		case 'b':
			count += _putbin(va_arg(args, unsigned int));
			break;
		case 'u':
			count += _unsined(va_arg(args, unsigned int));
			break;
		case 'o':
			count += _putoctal(va_arg(args, unsigned int));
			break;
		case 'x':
			count += _puthex(va_arg(args, unsigned int), 0);
			break;
		case 'X':
			count += _puthex(va_arg(args, unsigned int), 1);
			break;
		case 'S':
		{
			char *str = va_arg(args, char *);
			int i = 0;

			while (str[i] != '\0')
			{
				if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
				{
					count += _putstr("\\x");
					count += _puthex(str[i], 1);
				}
				else
					count += _putchar(str[i]);
				i++;
			}
			break;
		}
		case 'p':
			count += _putptr(va_arg(args, void *));
			break;
		case '%':
			count += _putchar('%');
			break;
		default:
			count += _putchar('%');
			count += _putchar(*format);
			break;
	}

	return (count);
}

