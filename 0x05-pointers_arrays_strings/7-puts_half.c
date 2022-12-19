#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: pointer to the variable str
 * Return: void.
 */
void puts_half(char *str)
{
	int len, i;


	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	for (i = (len + 1) / 2 ; str[i] != '\0' ; i++)
		_putchar(str[i]);

	_putchar('\n');
}
