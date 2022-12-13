#include "main.h"

/**
 * _islower - program that checks for lowercase character
 * Return: Always void (Success)
 */
int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if(i == c)
			_putchar(49);
		else
			_putchar(48);
	}

}
