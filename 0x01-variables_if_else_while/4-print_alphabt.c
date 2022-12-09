#include <stdio.h>
/* more headers goes there */
 
/* betty style doc for function main goes there */
int main(void)
{
	char i;
	/* display all lower case alphabets except q and e */
	for (i = 'a';i <= 'z';i++)
	{
		if(i != 'q' && i != 'e')
			putchar(i);
	}
	putchar('\n');
	return (0);
}

