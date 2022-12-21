#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to the first string.
 * @s2: pointer to the second string.
 * Return: an int value after comaprision.
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	i = 0;
	diff = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}

		i++;
	}

	return (diff);
}
