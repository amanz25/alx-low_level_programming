#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: length to be copied
 *
 * Return: pointer to the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int c1, c2, c3, sumLen;
	char *s;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;

	c1 = 0;
	while (s1[c1] != '\0')
		c1++;
	c2 = 0;
	while (s2[c2] != '\0')
		c2++;

	if (n > c2)
		n = c2;

	sumLen = c1 + n;
	s = malloc(sumLen + 1);
	if (s == NULL)
		return (NULL);

	c3 = 0;
	while (c3 < sumLen)
	{
		if (c3 < c1)
			s[c3] = s1[c3];
		else
			s[c3] = s2[c3 - c1];

		c3++;
	}

	s[c3] = '\0';

	return (s);
}
