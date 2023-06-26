#include <unistd.h>

/**
 * _putchar - writes a character to standard output
 * @c: character to write
 *
 * Return: 0 or 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


