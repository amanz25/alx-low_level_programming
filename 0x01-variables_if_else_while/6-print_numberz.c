#include <stdio.h>
/* more headers goes there */
 
/* betty style doc for function main goes there */
int main(void)
{
	int i;
	/* display all single digit numbers of base 10 using putchar */
	for (i = 0;i < 10;i++)
	{
		putchar(i%10 + '0');
	}
	putchar('\n');
	return (0);
}

