#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - function that print the opcodes of this program
 * @a: address of the main function
 * @n: number of bytes to print
 *
 * Return: void
 */

void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prints the value returned from print_opcodes
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: O
 */

int main(int argc, char **argv)
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, num);
	return (0);
}
