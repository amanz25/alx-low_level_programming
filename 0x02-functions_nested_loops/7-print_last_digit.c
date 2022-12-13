#include "main.h"

/**
 * print_last_digit - program that prints the last digit of a number
 * @n: number to get the last number
 * Return: Always last number of n (Success)
 */
int print_last_digit(int n)
{
	int reminder;

	if (n < 0)
		n = -n;
	reminder = n % 10;
	if (reminder < 0)
		reminder = -reminder;

	_putchar(reminder + '0');

	return (reminder);

}
