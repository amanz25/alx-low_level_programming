#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Void
 */

void more_numbers(void)
{
	int d;
	int val;

	for (d = 1; d <= 10; d++)
	{
		for (val = 0; val <= 14; val++)
		{
			if (val >= 10)
			{
				_putchar(val / 10 + '0');
			}
			_putchar(val % 10 + '0');
		}
		_putchar('\n');
	}
}
