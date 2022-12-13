#include "main.h"

/**
 * _islower - program that checks for lowercase character
 * @c: character to be tested
 * Return: Always void (Success)
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		_putchar(1);
	else
		_putchar(0);

}
