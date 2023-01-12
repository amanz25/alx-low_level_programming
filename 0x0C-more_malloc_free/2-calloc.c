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
	char *s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	return (s);
}
