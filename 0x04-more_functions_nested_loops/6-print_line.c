#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 * Return: Void
 */

void print_line(int n)
{
	int d;

	for (d = 1; d <= n; d++)
	{
		_putchar(95);
	}

	_putchar('\n');
}
