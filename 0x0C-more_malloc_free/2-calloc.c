#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: length of the arrat
 * @size: bytes
 *
 * Return: pointer to the allocated space.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);

	char *s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	return (s);
}
