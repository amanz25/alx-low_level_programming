#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: the head of the linkedlist
 *
 * Return: head node’s data.
 */
int pop_listint(listint_t **head)
{
	listint_t *curr;
	int data;

	if (*head != NULL)
	{
		curr = (*head);
		*head = curr->next;
		data = curr->n;
		free(curr);
		return (data);
	}
	else
		return (0);

}
