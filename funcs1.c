#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _unsined - writes an unsigned int to stdo
 * @n: the unsigned int to print
 *
 * Return: the number of characters printed
 */

int _unsined(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += _unsined(n / 10);

	_putchar('0' + (n % 10));
	count++;

	return (count);
}

/**
 * _putoctal - writes an octal number to stdo
 * @n: int to convert to octal
 *
 * Return: the number of chars printed
 */

int _putoctal(unsigned int n)
{
	int count = 0;

	if (n / 8)
		count += _putoctal(n / 8);

	_putchar('0' + (n % 8));
	count++;

	return (count);
}

/**
 * _puthex - writes a hexadecimal to stdo
 * @n: int to convert to hex
 * @upper: flag to check if isupper or islower
 *
 * Return: the number of chars printed
 */

int _puthex(unsigned int n, int upper)
{
	int count = 0;
	char hex_d;

	if (n / 16)
		count += _puthex(n / 16, upper);

	if ((n % 16) < 10)
		hex_d = '0' + (n % 16);
	else
		hex_d = (upper ? 'A' : 'a') + ((n % 16) - 10);

	_putchar(hex_d);
	count++;

	return (count);
}


