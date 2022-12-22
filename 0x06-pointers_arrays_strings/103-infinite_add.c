#include "main.h"

/**
 * *infinite_add - adds two numbers
 * @n1: the first number from the two.
 * @n2: the second number from the two.
 * @r: the buffer that the function will use to store the result
 * @size_r: buffer size.
 * Return: the sum of the two numbers.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c1, c2, rIndex, i, j, num;

	c1 = 0;
	while (n1[c1])
		c1++;
	c2 = 0;
	while (n2[c2])
		c2++;
	if (c1 > size_r || c2 > size_r)
		return (0);
	j = 0;
	for (c1--, c2--, rIndex = 0; rIndex < size_r - 1; c1--, c2--, rIndex++)
	{
		num = j;
		if (c1 >= 0)
			num += n1[c1] - '0';
		if (c2 >= 0)
			num += n2[c2] - '0';
		if (c1 < 0 && c2 < 0 && num == 0)
			break;
		j = num / 10;
		r[rIndex] = num % 10 + '0';
	}
	r[rIndex] = '\0';
	if (c1 >= 0 || c2 >= 0 || j)
		return (0);
	for (rIndex -= 1, i = 0; i < rIndex; rIndex--, i++)
	{
		j = r[rIndex];
		r[rIndex] = r[i];
		r[i] = j;
	}
	return (r);
}
