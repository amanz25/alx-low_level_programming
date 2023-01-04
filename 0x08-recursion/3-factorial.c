#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: given number
 *
 * Return: factorial of a given number.
 */

int factorial(int n)
{
	return (n * factorial(n - 1));

}
