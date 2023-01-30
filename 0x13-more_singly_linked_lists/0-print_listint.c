#include "lists.h"

/**
 * print_listint - print data found in the linked list
 * @h: head of the linked list
 *
 * Return: size_t for the size of the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
