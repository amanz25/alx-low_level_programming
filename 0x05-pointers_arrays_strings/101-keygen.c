#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - print password.
 *
 * Return: 0.
 */

int main(void)
{
	int ascii = 2772, i = 0, k, ran;
	char password[100];
	time_t t;

	srand((int) time(&t));
	while (ascii > 126)
	{
		ran = rand() % 126;
		password[i] = ran;
		ascii -= ran;
		i++;
	}
	if (ascii > 0)
		password[i] = ascii;
	else
	{
		i--;
	}

	for (k = 0; k <= i; k++)
	{
		printf("%c", password[k]);
	}
	return (0);
}
