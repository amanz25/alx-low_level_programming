#include "main.h"

/**
 * times_table - program that prints the 9 times table, starting with 0
 * Return: Always void (Success)
 */
void times_table(void)
{
	int row;
	int col;
	int product;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			product = row * col;
			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
					_putchar(' ');
			}
			if (product < 10)
				_putchar(product + '0');
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}

		_putchar('\n');

	}

}
