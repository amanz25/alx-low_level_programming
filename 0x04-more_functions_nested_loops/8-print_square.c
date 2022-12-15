#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square, followed by a new line
 * @size: the size of the square
 * Return: Void
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size ; j++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
