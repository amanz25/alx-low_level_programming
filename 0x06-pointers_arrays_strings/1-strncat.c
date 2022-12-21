#include "main.h"

/**
 * *_strncat - concatenates two strings by defining the char length
 * @dest: pointer to string.
 * @src: pointer to string.
 * @n: number of character to be concatinated from src to dest
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	i = 0;
	while (dest[i] != '\0')
		i++;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[i] = src[k];
		k++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
