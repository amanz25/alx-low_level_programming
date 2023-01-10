#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: first string for concat.
 * @s2: second string for concat.
 *
 * Return: NULL or pointer to the concatinated string.
 */

char *str_concat(char *s1, char *s2)
{
	int firstCount;
	int secondCount;
	char *s;
	int i, j;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;

	firstCount = 0;
	while (s1[firstCount] != '\0')
		firstCount++;

	secondCount = 0;
	while (s2[secondCount] != '\0')
		secondCount++;

	s = malloc(sizeof(char) * (firstCount + secondCount + 1));

	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < firstCount)
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < secondCount)
	{
		s[i] = s2[j];
		i++;
		j++;
	}

	return (s);

}
