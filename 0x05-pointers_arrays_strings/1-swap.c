#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 *
 * @a: pointer to the variable a
 * @b: pointer to the variable b
 * Return: Void.
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
