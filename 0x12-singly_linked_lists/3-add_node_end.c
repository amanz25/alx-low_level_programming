#include "lists.h"

/**
 * add_node_end - add node to the end of the linked list
 * @head: holds pointer of the head pointer
 * @str: the string to be added on the new linked list
 *
 * Return: pointer to the current linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *t2;
	int str_len = 0;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	if (str == NULL)
		return (NULL);

	str_len = string_len(str);
	temp->len = str_len;
	temp->str = strdup(str);
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

/**
 * string_len - get the length of the string
 * @s: the string
 *
 * Return: character count from the string
 */
int string_len(const char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
		;

	return (count);
}
