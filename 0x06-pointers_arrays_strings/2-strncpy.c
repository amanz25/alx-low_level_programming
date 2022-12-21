#include "main.h"

/**
 * *_strncpy - copies a string defining the char length of src
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 * @n: number of character to be copied from src to dest
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
