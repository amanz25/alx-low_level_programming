#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer to the variable s
 * Return: void.
 */
void rev_string(char *s)
{
	int j;


	j = 0;
	while (s[j] != '\0')
	{
		_putchar(s[j]);
		j++;
	}
	_putchar('\n');

	for (j = j - 1 ; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
