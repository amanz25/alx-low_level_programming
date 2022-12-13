#include "main.h"

/**
 * times_table - program that prints the 9 times table, starting with 0
 * Return: Always void (Success)
 */
void times_table(void)
{
	int row;
	int col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			_putchar(row * col + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');

	}

}
