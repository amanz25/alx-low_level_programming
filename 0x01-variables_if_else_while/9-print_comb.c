#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, num;

	/* prints all possible combinations of single-digit numbers */
	i = 0;
	num = 48;
	for (; i < 10;)
	{
		putchar(num);
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		num++;
		i++;
	}
	putchar(10);
	return (0);
}

