#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied.
 *
 * Return: NULL or pointer to a string having a copy of str.
 */

char *_strdup(char *str)
{
	int strCount;
	int strDupCount;
	char *s;

	if (str == NULL)
		return (NULL);

	strCount = 0;
	while (str[strCount] != '\0')
		strCount++;

	strCount += 1;

	s = malloc(sizeof(char) * strCount);

	if (s == NULL)
		return (NULL);

	strDupCount = 0;
	while (strDupCount < strCount)
	{
		s[strDupCount] = str[strDupCount];
		strDupCount++;
	}

	return (s);

}
