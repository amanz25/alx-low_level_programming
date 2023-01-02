#include "main.h"

/**
 * *_memcpy - copies memory area
 * @src: byte to be copied to dest
 * @dest: pointer to a memory area the copied will be stored
 * @n: number of byte to be copied
 *
 * Return: pointer to the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0 ; k < n ; k++)
	{
		dest[k] = src[k];
	}

	return (dest);

}
