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
	int i;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
		}
		else
		{
			i++;
			if (format[i] == '\0')
				return (-1);

			if (format[i] == '%')
			{
				count += _putchar('%');
			}
			else
			{
				count += process_format_specifier(format[i], args);
			}
		}
	}

	va_end(args);
	
	return (count);
}

