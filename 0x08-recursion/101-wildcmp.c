#include "main.h"

/**
 * wildcmp - function that compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: 1 if they considered identical or 0
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1)
	{
		if (*s2 == '*' && *s2)
			return (wildcmp(s1, s2 + 1));

		return (!*s2);
	}

	if (*s2 == *s1)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	return (0);
}
