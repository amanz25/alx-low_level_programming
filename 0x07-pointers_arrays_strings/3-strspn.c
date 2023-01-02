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
	unsigned int isFound;
	char *swap = accept;

	k = 0;
	while (*s != '\0')
	{
		isFound = 0;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				isFound = 1;
				break;
			}
			accept++;
		}

		if (isFound == 0)
			k++;
		accept = swap;

		s++;
	}

	return (k);

}
