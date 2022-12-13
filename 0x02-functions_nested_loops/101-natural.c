#include <stdio.h>

/**
 * main - Prints the sum of natural numbers below 1024 that are
 * multiples of 3 or 5
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
			sum += i;
	}

	printf("%d\n", sum);
	return (0);
}
