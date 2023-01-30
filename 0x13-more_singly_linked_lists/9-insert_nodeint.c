#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: the head of the linkedlist
 * @idx: position where the new node to be inserted
 * @n: value to be added on the node
 *
 * Return: the new node or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr, *cpy;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);

	if (idx != 0)
	{
		cpy = *head;
		while (i < idx - 1 && cpy != NULL)
		{
			cpy = cpy->next;
			i++;
		}
		if (cpy == NULL)
			return (NULL);
	}
	curr = malloc(sizeof(listint_t));
	if (curr == NULL)
		return (NULL);

	curr->n = n;
	if (idx == 0)
	{
		curr->next = *head;
		*head = curr;
		return (curr);
	}

	curr->next = cpy->next;
	cpy->next = curr;
	return (curr);
}
