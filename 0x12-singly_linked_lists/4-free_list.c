#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: the head of the linkedlist
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *curr;

	while (head != NULL)
	{
		curr = head->next;
		free(head->str);
		free(head);
		head = curr;
	}
}
