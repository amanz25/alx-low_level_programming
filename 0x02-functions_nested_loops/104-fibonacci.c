#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	unsigned long num;
	unsigned long prevNum;
	unsigned long a;

	for (i = 1; i <= 98; i++)
	{
		if (i == 1)
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

		if (i == 98)
			printf("%lu", num);
		else
			printf("%lu, ", num);
	}

	printf("\n");
	return (0);
}
