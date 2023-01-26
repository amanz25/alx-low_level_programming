#include <stddef.h>
#include "lists.h"

/**
 * print_list - print data found in the linked list
 * @h: head of the linked list
 *
 * Return: size_t for the size of the linked list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			print_string("[0] (nil)");
		else
		{
			_putchar('[');
			print_num(h->len);
			_putchar(']');
			_putchar(' ');
			print_string(h->str);
		}
		h = h->next;
		count++;

		_putchar('\n');
	}

	return (count);
}

/**
 * print_num - print number to standard window
 * @num: number to be printed
 *
 * Return: void
 */
void print_num(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -1 * num;
	}

	if (num / 10)
		print_num(num / 10);

	_putchar('0' + (num % 10));
}

/**
 * print_string - print string to standard window
 * @s: string to be displayed
 *
 * Retrun: void
 */
void print_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
}

