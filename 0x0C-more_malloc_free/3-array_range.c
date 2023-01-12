#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: min num in the list
 * @max: max num in the list
 *
 * Return: pointer to the new array.
 */
int *array_range(int min, int max)
{
	int c;
	int *s;

	if (min > max)
		return (NULL);

	s = malloc(sizeof(int) * ((max - min) + 1));

	if (s == NULL)
		return (NULL);

	c = 0;
	while (max >= min)
	{
		s[c] = min;
		min++;
		c++;
	}

	return (s);
}
