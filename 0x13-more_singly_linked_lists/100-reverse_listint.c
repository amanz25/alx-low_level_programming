#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: pointer to the header to be reversed
 *
 * Return: pointer pointing to the head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *nxt = NULL;

	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = nxt;
	}

	*head = previous;

	return (*head);
}
