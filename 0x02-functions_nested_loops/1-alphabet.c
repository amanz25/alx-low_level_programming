#include "main.h"

/**
 * main - program that prints the alphabet, in lowercase, followed by a new line
 * Return: void (Success)
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
