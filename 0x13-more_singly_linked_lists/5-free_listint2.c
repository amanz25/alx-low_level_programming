#include "lists.h"

/**
 * free_listint2 - function that frees a list_t list and set null for header
 * @head: the head of the linkedlist
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *curr;

	while (*head != NULL)
	{
		curr = (*head)->next;
		free(*head);
		(*head) = curr;
	}

}
