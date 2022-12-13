#include "main.h"

/**
 * print_last_digit - program that prints the last digit of a number
 * @n: number to get the last number
 * Return: Always last number of n (Success)
 */
int print_last_digit(int n)
{

	if (n >= 0)
		return (n % 10);
	else
		return ((-1 * n) % 10);

}
