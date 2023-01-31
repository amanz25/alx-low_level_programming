#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: pointer to the header
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (0);

	while ((*h) != NULL)
	{
		if (*h <= (*h)->next)
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
		else
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
	}

	*h = NULL;

	return (count);
}
