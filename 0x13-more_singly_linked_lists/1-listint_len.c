#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: head of the linked list
 *
 * Return: size_t for the size of the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
