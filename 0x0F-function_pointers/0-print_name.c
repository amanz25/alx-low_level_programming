#include "function_pointers.h"


/**
 * print_name - function that prints a name
 * @name: person name
 * @f: pointer to a function
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
