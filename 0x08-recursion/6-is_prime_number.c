#include "main.h"

/**
 * prime - checks if number is prime by checking using different factor
 * @factor: factor to be checked for num
 * @num: number to be checked
 *
 * Return: 0 if it isn't prime & 1 if it is prime
 *
 */

int prime(int factor, int num)
{
	if (num < 2 || num % factor == 0)
		return (0);
	else if (factor > num / 2)
		return (1);
	else
		return (prime(factor + 1, num));
}

/**
 * is_prime_number - function to check whether the num is prime or not
 * @n: Number to be checked
 *
 * Return: 0 if it isn't prime & 1 if it is prime
 */

int is_prime_number(int n)
{
	if (n != 2)
		return (prime(2, n));
	else
		return (1);
}
