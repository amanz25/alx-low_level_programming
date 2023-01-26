#include "main.h"

/**
 * add_node - add node to the beginning of the linked list
 * @head: holds pointer of the head pointer
 * @str: the string to be added on the new linked list
 *
 * Return: pointer to the current linked list
 */
list_t *add_node(list_t **head, char *str)
{
	list_t *temp;
	int str_len = 0;

	str_len = string_len(str);
	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	temp->len = str_len;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;

	return (*head);
}

/**
 * string_len - get the length of the string
 * @s: the string
 *
 * Return: character count from the string
 */
int string_len(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
		;

	return (count);
}
