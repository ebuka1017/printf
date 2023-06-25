/*helper_functions*/

#include <unistd.h>
#include "main.h"
#include <stdlib.h>

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
 * null_checker - checks if format == null
 *
 * Return: -1
 */

int null_checker(char c)
{
	if (c == NULL)
		return (-1);
}

