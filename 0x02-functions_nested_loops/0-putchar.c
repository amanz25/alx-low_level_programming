#include <main.h>

/**
 * main - program that prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char stringInArray[] = "_putchar";

	int index;

	for (index = 0; index <= 7; index++)
	{
		_putchar(stringInArray[index]);
	}

	_putchar('\n');
	return (0);

}
