#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be square rooted
 *
 * Return: square root of number n.
 */


int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (_sqrt(1, n));
}

/**
 * _sqrt - return square root by guessing
 * @guessNumber: guess number by squaring
 * @num: given num to be square root
 *
 * Return: square root of num or -1
 */

int _sqrt(int guessNumber, int num)
{
	if ((guessNumber * guessNumber) == num)
		return (guessNumber);
	if ((guessNumber * guessNumber) > num)
		return (-1);

	return (_sqrt(guessNumber + 1, num));

}

