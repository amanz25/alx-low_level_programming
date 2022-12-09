#include <stdio.h>
/* more headers goes there */
 
/* betty style doc for function main goes there */
int main(void)
{
	char i;
	char j;
	/* display all lower case alphabets */
	for (i = 'a';i <= 'z';i++)
	{
		putchar(i);
	}
	/* followed by all upper case alphabets */
	for (j = 'A';j <= 'Z';j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}

