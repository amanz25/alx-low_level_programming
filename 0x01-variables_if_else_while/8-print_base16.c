#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, letter, num;

	/* prints all the numbers of base 16 in lowercase */
	num = 48;
	i = 0;
	for (; i < 10;)
	{
		putchar(num);
		i++;
		num++;
	}
	letter = 97;
	i = 1;
	for (; i < 7;)
	{
		putchar(letter);
		i++;
		letter++;
	}
	putchar(10);
	return (0);
}

