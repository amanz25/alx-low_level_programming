#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: pointer to the string
 * @c: character to be checked from the string
 *
 * Return:  pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s += 1;
	}

	if (*s == c)
		return (s);

	return (0);

}
