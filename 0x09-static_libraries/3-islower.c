#include "main.h"

/**
 * _islower - program that checks for lowercase character
 * @c: character to be tested
 * Return: Always 1 or 0 (Success)
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
