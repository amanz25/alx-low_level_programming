#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: string separator
 * @n: count of numbers
 * @...: numbers
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *p;

	va_start(valist, n);
	i = 0;
	while (i < n)
	{
	if (separator != NULL && i != 0)
		printf("%s", separator);
	p = va_arg(valist, char *);
	printf("%s", (p == NULL) ? "(nil)" : p);
	i++;
	}
	printf("\n");
	va_end(valist);
}
