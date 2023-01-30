#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: pointer to the header
 *
 * Return: address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{

	while (head != NULL)
	{
		if (head <= head->next)
		{
			return (head->next);
		}
		else
			head = head->next;
	}

	return (NULL);
}
