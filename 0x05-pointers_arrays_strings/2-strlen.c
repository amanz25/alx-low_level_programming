#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer to the variable s
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (int i = 0; s[i] != '\0'; i++)
		len++;

	return (len);
}
