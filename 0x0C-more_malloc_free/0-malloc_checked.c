#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size
 *
 * Return: pointer to the allocated space.
 */
void *malloc_checked(unsigned int b)
{
	char *s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
