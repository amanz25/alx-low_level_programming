#include "main.h"

/**
 * print_rev - prints a string, in reverse
 *
 * @s: pointer to the variable s
 * Return: void.
 */
void print_rev(char *s)
{
	int j = 0;
	int k;

	while (s[j] != '\0')
	{
		j++;
	}

	for (k = j ; k >= 0; k--)
	{
		_putchar(s[k]);
	}

	_putchar('\n');
}
