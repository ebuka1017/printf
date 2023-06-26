#include "main.h"

/**
 * _putstr - Writes a string to stdout
 * @str: The string to write
 *
 * Return: The number of characters written
 */

int _putstr(char *str)
{
	int count = 0;

	while (*str)
	{
		_putchar(*str++);
		count++;
	}

	return (count);
}

