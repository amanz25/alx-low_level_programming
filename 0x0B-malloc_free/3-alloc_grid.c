#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - return pointer to a 2 dimensional array of integers
 * @width: width of the matrix.
 * @height: height of the matrix.
 *
 * Return: NULL or pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, z;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(height * sizeof(int *));
	if (s == 0 || s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (s[i] == 0 || s[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(s[j]);
			free(s);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (z = 0; z < width; z++)
			s[k][z] = 0;
	}
	return (s);
}
