#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: binary number in string
 * Return: decimal number or 0 (got failure)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, square, num;
	int k, j, count;

	count = 0;
	while (b[count] != '\0')
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);

		count++;
	}
	sum = 0;
	for (k = count; k > 0; k--)
	{
		square = 1;
		num = 0;
		for (j = 0; j < (count - k); j++)
			square *= 2;

		if (b[k - 1] == '1')
			num = 1;

		sum += (square * num);
	}

	return (sum);
}
