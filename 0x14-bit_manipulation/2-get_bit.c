#include "main.h"

/**
 * get_bit - return the value of a bit at index in decimal
 * @n: number for search
 * @index: the index of the bit 
 * Return: value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

