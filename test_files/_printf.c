#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int process_format_specifier(char specifier, va_list args);
int handle_unknown_specifier(char specifier);

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

/**
 * process_format_specifier - Process the format specifier and call the
 * corresponding printing function.
 * @specifier: The format specifier character.
 * @args: The va_list containing the function arguments.
 *
 * Return: The number of characters printed.
 */
int process_format_specifier(char specifier, va_list args)
{
        switch (specifier)
        {
                case 'c':
                        return (print_char(args));
                case 's':
                        return (print_string(args));
                case '%':
                        return (print_percent(args));
                default:
                        return (handle_unknown_specifier(specifier));
        }
}

/**
 * handle_unknown_specifier - Handle unknown format specifier by printing
 * a percent sign followed by the specifier character.
 * @specifier: The unknown format specifier character.
 *
 * Return: The number of characters printed.
 */
int handle_unknown_specifier(char specifier)
{
        int count = 0;
        count += _putchar('%');
        count += _putchar(specifier);
        return (count);
}

