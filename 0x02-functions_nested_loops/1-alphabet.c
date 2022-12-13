#include "main.h"

/**
 * main - program that prints the alphabet, in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
	return (0);

}
