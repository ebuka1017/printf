#include <unistd.h>

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

