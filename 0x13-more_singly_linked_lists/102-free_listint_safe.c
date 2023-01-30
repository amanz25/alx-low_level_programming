#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: pointer to the header
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	int count = 0;
	listint_t *temp;

	while ((*h) != NULL)
	{
		count++;
		if (*h <= (*h)->next)
		{
			*h = NULL;
			break;
		}
		else
		{
			temp = (*h)->next;
			*h = temp;
		}
	}

	*h = NULL;

	return (count);
}
