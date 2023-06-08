#include "hash_tables.h"

/**
 * key_index - Get the in
 * @key: Thdex of.
 * @size: The size table.
 *
 * Return: The ey.
 * Description: Usalgorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
