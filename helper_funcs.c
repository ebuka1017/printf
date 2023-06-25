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
	
	while (*str != '\0')
	{
		if (_putchar(*str) == -1)
			return (-1);

		len++;
		str++;
	}

	return (len);
}

