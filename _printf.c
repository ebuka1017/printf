#include "main.h"
#include <stdarg.h>

/**
 * _printf - custom printf function
 * @format: format string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	if (format != NULL)
	{
		va_list args;
		int count = 0;

		va_start(args, format);

		while (*format != '\0')
		{
			if (*format == '%')
			{
				format++;
				switch (*format)
				{
					case 'c':
						count += _putchar(va_arg(args, int));
						break;
					case 's':
						count += _putstr(va_arg(args, char *));
						break;
					case '%':
						count += _putchar('%');
						break;
					default:
						count += _putchar('%');
						count += _putchar(*format);
						break;
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
	else
		return (-1);
}

