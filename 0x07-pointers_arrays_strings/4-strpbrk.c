#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string
 * @accept: match bytes with s
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int isFound;
	char *swap = accept;

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

		if (isFound == 1)
			return (s);

		accept = swap;
		s++;
	}

	return (0);

}
