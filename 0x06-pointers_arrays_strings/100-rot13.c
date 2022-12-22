#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @str: pointer to the array element.
 * Return: array char pointer.
 */

char *rot13(char *str)
{
	int i, k;

	char first[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char second[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (str[i] != '\0')
	{
		k = 0;
		while (first[k] != '\0')
		{
			if (str[i] == first[k])
			{
				str[i] = second[k];
				break;
			}
			k++;
		}

		i++;
	}

	return (str);
}
