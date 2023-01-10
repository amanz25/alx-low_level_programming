#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatenates all the arguments
 * @ac: argument count
 * @av: arguments
 *
 * Return: pointer to a string.
 */

char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, k, count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		s = av[i];
		j = 0;

		while (s[j++])
			count++;
		count++;
		i++;
	}

	str = malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < count; i++)
	{
		s = av[i];
		k = 0;

		while (s[k])
		{
			str[j] = s[k];
			k++;
			j++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';

	return (str);
}
