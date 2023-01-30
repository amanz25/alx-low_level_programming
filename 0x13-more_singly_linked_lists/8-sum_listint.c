#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: the head of the linkedlist
 *
 * Return: sum of n in linkedlist or 0.
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
