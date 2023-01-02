#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * @a: matrix of integers.
 * @size: size of the matrix.
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, firstDigSum = 0, secondDigSum = 0;

	for (i = 0; i < size; i++)
	{
		firstDigSum += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		secondDigSum += a[i];
		a -= size;
	}

	printf("%d, %d\n", firstDigSum, secondDigSum);
}
