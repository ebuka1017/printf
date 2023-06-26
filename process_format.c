#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * process_format - print function for each fmt specifier
 * @format: format string
 * @args: va_list containing args
 *
 * Return: number of characters printed
 */
int process_format(const char *format, va_list args)
{
	int count = 0;
	char c, *str;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c': 
					c = (char)va_arg(args, int);
					write(1, &c, 1);
					count++;
					break;
				case 's':
					str = va_arg(args, char *);
					while (*str != '\0')
					{
						write(1, str, 1);
						str++;
						count++;
					}
					break;
				case '%':
					write(1, "%%", 1);
					count++;
					break;
				default:
					write(1, "%%", 1);
					write(1, format, 1);
					count += 2;
					break;
			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	return (count);
}

