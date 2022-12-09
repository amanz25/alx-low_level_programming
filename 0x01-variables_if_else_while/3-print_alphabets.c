#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	char j;

	/* display all lower case alphabets */
	for (i = 'a' ; i <= 'z'; i++)
	{
		putchar(i);
	}
	/* followed by all upper case alphabets */
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}

