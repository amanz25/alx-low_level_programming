#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: pointer to the array element.
 * Return: array char pointer.
 */

char *leet(char *str)
{
	int i, j;

	char Characters[] = "aAeEoOtTlL";
	char Numbers[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{

		for (j = 0; Characters[j] != '\0'; j++)
		{
		if (str[i] == Characters[j])
		{
		str[i] = Numbers[j];
		break;
		}
		}

		i++;
	}

	return (str);
}
