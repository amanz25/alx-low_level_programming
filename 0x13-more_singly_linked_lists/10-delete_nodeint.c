#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index
 * @head: the head of the linkedlist
 * @index: the index of the node that should be deleted
 *
 * Return: 1 (success) or -1 (failed).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *near;
	unsigned int count;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		/* to remove the first index */
		near = (*head)->next;
		free(*head);
		*head = near;
		return (1);
	}
	curr = *head;
	count = 0;
	while (count < index - 1)
	{
		if (curr->next == NULL)
			return (-1);

		curr = curr->next;
		count++;
	}
	near = curr->next;
	curr->next = near->next;
	free(near);
	return (1);
}
