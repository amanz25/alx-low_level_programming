#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i;
	long int num = 612852475143;

	for (i = 2; i < num; i++)
	{
		while (num % i == 0)
		{
			num = num / i;
		}

	}
	printf("%lu\n", num);
	return (0);
}

