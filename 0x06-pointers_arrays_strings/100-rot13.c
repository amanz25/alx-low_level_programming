#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @str: pointer to the array element.
 * Return: array char pointer.
 */

char *rot13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i] >= 'a' && str[i] <= 'z') ||
		(str[i] >= 'A' && str[i] <= 'Z'))
		{
		if ((str[i] >= 'a' && str[i] <= 'm') ||
		(str[i] >= 'A' && str[i] <= 'M'))
			str[i] = str[i] + 13;
		else
			str[i] = str[i] - 13;

		break;
		}

		i++;
	}

	return (str);
}
