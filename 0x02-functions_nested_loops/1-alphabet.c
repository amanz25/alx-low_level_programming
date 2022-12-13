#include "main.h"

/**
 * print_alphabet - program that prints the alphabet, in lowercase
 * Return: Always void (Success)
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');

}
