/*helper_functions*/

#include <unistd.h>
#include "main.h"

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

