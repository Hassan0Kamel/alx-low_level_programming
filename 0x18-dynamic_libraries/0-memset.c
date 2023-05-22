#include "main.h"

/**
 * *_memset - fills mh a constant byte
 * @s: memoryo be filled
 * @b: chopy
 * @n: nus to copy b
 * Return: poinory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
