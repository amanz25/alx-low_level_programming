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
	const listint_t *temp;

	count = 0;
	if(head == NULL)
		return (0);

	temp = head;
	while (head != NULL)
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

	if (temp != NULL && count == 0)
		exit (98);

	return (count);
}
