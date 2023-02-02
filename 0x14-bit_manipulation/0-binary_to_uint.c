#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: binary number in string
 * Return: decimal number or 0 (got failure)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, square;
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
		for (j = 0; j < (count - k); j++)
			square *= 2;

		sum += (square * (b[k - 1] - '0'));
	}

	return (sum);
}
