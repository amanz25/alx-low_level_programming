#include "lists.h"

/**
 * add_nodeint_end - add node to the end of the linked list
 * @head: holds pointer of the head pointer
 * @n: the number to be added on the new linked list
 *
 * Return: pointer to the current linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *t2;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	if (*head != NULL)
	{
		t2 = *head;
		while (t2->next)
			t2 = t2->next;

		t2->next = temp;
		return (temp);
	}
	else
	{
		*head = temp;
		return (temp);
	}
}
