#include <stdio.h>
/* more headers goes there */
 
/* betty style doc for function main goes there */
int main(void)
{
	char i;
	/* display all lower case alphabets in reverse order */
	for (i = 'z';i >= 'a';i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

