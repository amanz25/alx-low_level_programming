#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: decimal number to be updated
 * @index: index where the value changed to 0
 * Return: 1 (success) or -1 (error occurred)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;
	int i;

	if (index > 64)
		return (-1);

	i = index;
	num = 1;
	while (i > 0)
	{
		i--;
		num *= 2;
	}

	if ((*n >> index) & 1)
		*n -= num;

	return (1);
}
