#include "main.h"
#include <stdio.h>

/**
 * line_print - display buffer bytes
 * @buff: buffer
 * @b: buffer bytes
 * @l: buffer line
 * Return: void
 */

void line_print(char *buff, int b, int l)
{
	int x, y;

	x = 0;
	while (x <= 9)
	{
		if (x <= b)
		printf("%02x", buff[l * 10 + x]);
		else
		{
			putchar(' ');
			putchar(' ');
		}
		if (x % 2)
			putchar(' ');
		x++;
	}
	y = 0;
	while (y <= b)
	{
		if (buff[l * 10 + y] > 31 && buff[l * 10 + y] < 127)
			putchar(buff[l * 10 + y]);
		else
			putchar('.');

		y++;
	}
}

/**
 * print_buffer - print the content of size bytes of the buffer pointed by b.
 * @b: character array pointer.
 * @size: size of bytes.
 * Return: void.
 */
void print_buffer(char *b, int size)
{
	int count;

	count = 0;
	while (count <= (size - 1) / 10 && size)
	{
		printf("%08x: ", count * 10);
		if (count < size / 10)
		{
			line_print(b, 9, count);
		}
		else
		{
			line_print(b, size % 10 - 1, count);
		}
		putchar('\n');
		count++;
	}
	if (size == 0)
		putchar('\n');
}
