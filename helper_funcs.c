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

