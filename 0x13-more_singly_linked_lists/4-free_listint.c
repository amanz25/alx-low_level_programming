#include "lists.h"

/**
 * free_listint - function that frees a list_t list
 * @head: the head of the linkedlist
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head != NULL)
	{
		curr = head->next;
		free(head);
		head = curr;
	}
}
