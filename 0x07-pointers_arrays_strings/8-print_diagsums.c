#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer for a square matrix
 * @size: size to be added
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, firstDigSum, secondDigSum;

	for (i = 0; i < size; i++)
	{
		firstDigSum += a[(size * i) + i];
		secondDigSum += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", firstDigSum, secondDigSum);
}
