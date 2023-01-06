#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: list of arguments
 *
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	char *position;
	int k;
	int strLength;

	if (argc == 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		position = argv[i];
		strLength = strlen(position);

		k = 0;
		while (k < strLength)
		{
			if (!isdigit(*(position + k)))
			{
				printf("Error\n");
				return (1);
			}
			k++;
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	
	return (0);
}
