#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 *
 * Return: null or pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;
	unsigned long int i;

	h = malloc(sizeof(hash_table_t));
	if (h != NULL)
	{
		h->size = size;
		h->array = malloc(size * sizeof(hash_node_t *));
		if (h->array == NULL)
			return (NULL);
		i = 0;
		while (i < size)
		{
			h->array[i] = NULL;
			i++;
		}
		return (h);
	}
	else
		return (NULL);
