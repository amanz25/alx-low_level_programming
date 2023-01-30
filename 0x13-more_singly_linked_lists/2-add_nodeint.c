#include "lists.h"

/**
 * add_nodeint - add node to the beginning of the linked list
 * @head: holds pointer of the head pointer
 * @n: the number to be added on the new linked list
 *
 * Return: pointer to the current linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
