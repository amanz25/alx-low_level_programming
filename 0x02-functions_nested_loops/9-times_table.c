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
			if (product < 10)
				_putchar(product + '0');
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}

			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');

	}

}
