#include "main.h"
#include <stdarg.h>
#include <unistd.h>

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
			return (print_percent());
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

