#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: pointer to the header
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count;

	count = 0;
	if (head == NULL)
		exit(98);

	while (head)
	{
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (head <= head->next)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		else
			head = head->next;
	}

	return (count);
}
