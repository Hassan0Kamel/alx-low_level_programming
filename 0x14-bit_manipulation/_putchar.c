#include "main.h"
#include <unistd.h>

/**
 * _putchar - writing the character c to stdout
 *
 * @c: the character to print.
 * Return: if success 1.
 * if there's an error, -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
