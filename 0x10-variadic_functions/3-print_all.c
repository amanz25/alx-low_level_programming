#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_all - function that prints anything
* @format: format
* Return: void.
*/
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int j = 0, start = 0;
	char *p;

	va_start(list, format);
	while (format && format[j] != '\0')
	{
		if (format[j] == 'c' || format[j] == 'i' || format[j] == 'f'
		|| format[j] == 's')
		{
			if (start == 1)
				printf(", ");
			start = 1;
		}

		if (format[j] == 'c')
			printf("%c", va_arg(list, int));
		else if (format[j] == 'i')
			printf("%i", va_arg(list, int));
		else if (format[j] == 'f')
			printf("%f", va_arg(list, double));
		else if (format[j] == 's')
		{
			p = va_arg(list, char*);
			if (p)
			{
				printf("%s", p);
				break;
			}
			printf("%p", p);
		}
		j++; }
	printf("\n");
	va_end(list);
}
