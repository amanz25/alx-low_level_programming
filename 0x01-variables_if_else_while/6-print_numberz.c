#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* display all single digit numbers of base 10 using putchar */
	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}

