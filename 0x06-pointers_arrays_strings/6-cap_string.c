#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @str: pointer to the array element.
 * Return: array char pointer.
 */

char *cap_string(char *str)
{
	int i;

	i = 0;
while (str[i] != '\0')
{
	if (i != 0)
	{
		if (str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.'
		|| str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"'
		|| str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{'
		|| str[i - 1] == '}' || str[i - 1] == ' ' || str[i - 1] == '\n'
		|| str[i - 1] == '\t')
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
			else
				str[i] = str[i];
		}
	}
	else
	{
	if (str[i] >= 97 && str[i] <= 122)
		str[i] = str[i] - 32;
	else
		str[i] = str[i];
	}
		i++;
}

	return (str);
}
