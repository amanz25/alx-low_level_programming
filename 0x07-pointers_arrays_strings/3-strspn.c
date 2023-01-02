#include "main.h"

/**
 * _strspn - length of a prefix substring
 * @s: pointer to the string
 * @accept: bytes where the prefix used to search
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k;

	k = 1;
	while (*s != '\0')
	{
		if (*s == accept[0])
			return (k);

		s += 1;
		k++;
	}

	return (0);

}
