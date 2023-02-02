#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 (big endian) or 1 (little endian)
 */
int get_endianness(void)
{
	int i;

	i = 1;
	if (*(char *)&i == 1)
		return (1);
	else
		return (0);
}
