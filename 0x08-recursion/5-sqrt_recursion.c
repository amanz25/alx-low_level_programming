#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be square rooted
 *
 * Return: square root of number n.
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);
	if ((i * i)  == n)
		return (i);
	if ((i * i) > n)
		return (-1);

	return (_sqrt_recursion(n, i + 1));

}
