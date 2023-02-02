#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: decimal number
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int num;

	if (n == 0)
		_putchar('0');
	else
	{
		num = n;
		i = 0;
		while ((num >>= 1) > 0)
			i++;

		while (i >= 0)
		{
			if ((n >> i) & 1)
				_putchar('1');
			else
				_putchar('0');
			i--;
		}
	}
}
