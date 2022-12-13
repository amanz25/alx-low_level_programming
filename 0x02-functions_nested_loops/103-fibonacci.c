#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: Always 0.
 */

int main(void)
{
	int count = 1;
	unsigned long num;
	unsigned long prevNum;
	unsigned long a;
	unsigned long sum = 0;

	while (num < 4000000)
	{
		if (count == 1)
		{
			num = 1;
			prevNum = 1;
		}
		else
		{
			a = num;
			num += prevNum;
			prevNum = a;
		}

		if (num % 2 == 0)
			sum += num;

		count++;
	}

	printf("%lu\n", sum);
	return (0);
}
