#include <stdlib.h>
#include "main.h"

/**
 * _realloc -  function that reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size in bytes
 *
 * Return: pointer to reallocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);
		if (s == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		s = malloc(new_size);
		if (s == NULL)
			return (s);
		for (i = 0; i < old_size; i++)
			s[i] = *((char *)ptr + 1);
		free(ptr);
	}

	return (s);
}
