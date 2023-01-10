#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a char c.
 * @size: size of character
 * @c: character to be initialized
 *
 * Return: pointer to a string.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(c) * size);

	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);

}
