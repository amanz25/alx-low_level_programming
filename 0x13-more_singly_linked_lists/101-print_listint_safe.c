#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: pointer to the header
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count, i = 0;

	count = Check_Unique_Node(head);
	if (count == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
	}
	else
	{
		while (i < count)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			i++;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (count);
}

/**
 * Check_Unique_Node - check the unique node on the list
 * @head: pointer to the header
 *
 * Return: if there is a loop or not 0 (no loop) else 1
 */
size_t Check_Unique_Node(const listint_t *head)
{
	size_t count = 1;
	const listint_t *fast, *slow;

	if (!head || !(head->next))
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast != NULL)
	{
		if (fast == slow)
		{
			slow = head;
			while (fast != slow)
			{
				count++;
				slow = slow->next;
				fast = (fast->next);
			}
			slow = slow->next;
			while (fast != slow)
			{
				count++;
				slow = slow->next;
			}

			return (count);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}
