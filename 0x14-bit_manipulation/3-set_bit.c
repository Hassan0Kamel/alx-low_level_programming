#include "main.h"

/**
 * set_bit - set a bit at an index.
 * @index: index of a bit to set to 1
 * @n: pointer to the number to change.
 *
 *
 * Return: 1 if succeeded, -1 if failed.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
