#include "main.h"

/**
 * print_times_table - program that prints the n times table, starting with 0
 * @n: time table limit
 * Return: Always void (Success)
 */
void print_times_table(int n)
{
	int row, col, product;

	for (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				product = row * col;
				if (col == 0)
					_putchar(product + '0');
				if (product < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else if (product >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');

				}}
			_putchar('\n');
		}}}
