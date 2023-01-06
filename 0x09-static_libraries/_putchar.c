#include <unistd.h>

/**
 * _putchar - write the character to standard output
 * @c: character to be printed
 *
 * Return: 1 or -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
