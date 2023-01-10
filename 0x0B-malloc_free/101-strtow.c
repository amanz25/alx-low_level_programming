#include <stdlib.h>
#include "main.h"

/**
 * word_count - count the number of words in a string
 * @str: string
 *
 * Return: number of words in strung str
 */
int word_count(char *str)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = 0;

	while (str[j] != '\0')
	{
		if (str[j] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			k++;
		}
		j++;
	}
	return (k);
}
/**
 * strtow - function that splits a string into words
 * @str: string
 *
 * Return: NULL or pointer to a string
 */
char **strtow(char *str)
{
	char **s, *t;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = word_count(str);
	if (words == 0)
		return (NULL);

	s = malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				t = malloc(sizeof(char) * (c + 1));
				if (t == NULL)
					return (NULL);
				while (start < end)
					*t++ = str[start++];
				*t = '\0';
				s[k] = t - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	s[k] = NULL;

	return (s);
}
