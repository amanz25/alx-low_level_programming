#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: list of arguments
 *
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	int count = 0;
	int val;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		val = atoi(argv[1]);

		if (val < 0)
			printf("0\n");

		while (val)
		{
			count++;
			if (val >= 25)
				val -= 25;
			else if (val >= 10)
				val -= 10;
			else if (val >= 5)
				val -= 5;
			else if (val >= 2)
				val -= 2;
			else if (val >= 1)
				val -= 1;
		}

		printf("%d\n", count);
	}

	return (0);
}
