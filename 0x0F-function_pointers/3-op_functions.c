#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - return sum
 * @a: the first num
 * @b: the second num
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return difference
 * @a: the first num
 * @b: the second num
 *
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return product
 * @a: the first num
 * @b: the second num
 *
 *  Return: ...
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return quotient
 * @a: the first num
 * @b: the second num
 *
 *  Return: int.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - return reminder
 * @a: the first num
 * @b: the second num
 *
 * Return: int.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
