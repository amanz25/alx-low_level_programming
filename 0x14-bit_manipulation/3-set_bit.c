#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: decimal number to be updated
 * @index: index where the value changed to 1
 * Return: 1 (success) or -1 (error occurred)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > 64)
		return (-1);

	num = 1;
	while (index > 0)
	{
		index--;
		num *= 2;
	}

	*n += num;

	return (1);
}
