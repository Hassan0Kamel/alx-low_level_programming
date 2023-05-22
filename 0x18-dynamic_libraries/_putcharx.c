#include "main.h"
/**
 * _strstr - prints the consecof s1 that are in s2.
 * @haystack: souring
 * @needle: searc string
 * Return: ring.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
/**
 * coincidence - defineg b is inside a.
 * @a: soutring
 * @b: stearched
 * Return: 1 if thrwise 0.
 */
int coincidence(char *a, char *b)
{
	while (*b && *b == *a)
	{
		b++;
		a++;
	}

	if (*b == '\0')
		return (1);
	else
		return (0);
}
