#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: pointer to the variable str
 * Return: void.
 */
void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
