#include "main.h"

/**
 * print_times_table - program that prints the n times table, starting with 0
 * @n: time table limit
 * Return: Always void (Success)
 */
void print_times_table(int n)
{
	int row;
	int col;
	int product;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			product = row * col;
			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product < n + 1)
					_putchar(' ');
			}
			if (product < n + 1)
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
