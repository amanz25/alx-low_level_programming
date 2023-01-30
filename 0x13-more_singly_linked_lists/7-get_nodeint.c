#include "lists.h"

/**
 * get_nodeint_at_index - eturns the nth node of a listint_t linked list
 * @head: the head of the linkedlist
 * @index: index of linked list
 *
 * Return: node at the specified index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	i = 0;
	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
