#include "main.h"

/**
 * clear_bit - setting the value to 0
 * @index: index of a bit to be cleared
 * @n: pointer to the number to change.
 *
 * Return: 1 if succeess, -1 if failed.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
