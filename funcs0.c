/*helper_functions*/

#include <unistd.h>
#include "main.h"

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


