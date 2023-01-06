#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area pointed
 * @b: constant byte
 * @n: the first bytes
 *
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0 ; k < n ; k++)
	{
		s[k] = b;
	}

	return (s);

}
