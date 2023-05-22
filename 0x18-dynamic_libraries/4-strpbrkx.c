#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches set of bytes
 * @s: striarch
 * @accept: stringconto look for
 * Return: poinhe byte in s that mate bytes in accept
 * or NULL if no ound
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
