#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 *
 * @s: pointer to the variable s
 * Return: void.
 */
void print_rev(char *s)
{
	int j = 0;

	while (s[j])
		j++;

	while (j--)
		_putchar(s[j]);

	_putchar('\n');
}
