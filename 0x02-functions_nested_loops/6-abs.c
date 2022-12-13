#include "main.h"

/**
 * _abs - program that computes the absolute value of an integer
 * @n: number to be absolute
 * Return: Always absolute value of n (Success)
 */
int _abs(int n)
{

	if (n > 0)
		return (n);
	else if (n < 0)
		return (-1 * n);
	else
		return (0);

}
