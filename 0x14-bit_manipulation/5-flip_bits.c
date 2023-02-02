#include "main.h"

/**
 *  flip_bits- number of bits flip to get from one number to another
 * @n: first decimal number
 * @m: second decimal number
 * Return: number of bit different between the 2 number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	int count;

	num = n ^ m;
	count = 0;
	while (num)
	{
		count++;
		num &= (num - 1);
	}

	return (count);
}
