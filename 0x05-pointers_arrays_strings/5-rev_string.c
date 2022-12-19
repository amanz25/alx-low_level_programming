#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer to the variable s
 * Return: void.
 */
void rev_string(char *s)
{
	int j, k, i;
	char c1, c2;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}

	k = j - 1;
	i = 0;

	while (k > i)
	{
		c1 = s[i];
		c2 = s[k];
		s[i] = c2;
		s[k] = c1;
		k--;
		i++;
	}
}
