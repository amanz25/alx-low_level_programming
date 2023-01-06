#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name
 * @argc: argument count
 * @argv: list of arguments
 *
 * Return: 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
