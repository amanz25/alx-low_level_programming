#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number in decimal
 * @index: index of bit
 * Return: index or -1 (error)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	if (index > 64)
		return (-1);

	num = n >> index;

	return (num & 1);
}
