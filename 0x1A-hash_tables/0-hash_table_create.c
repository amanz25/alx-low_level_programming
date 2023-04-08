#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 *
 * Return: null or pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table != NULL)
	{
		hash_table->size = size;
		hash_table->array = malloc(size * sizeof(hash_node_t *));
		if (hash_table->array == NULL)
		{
			free(hash_table);
			return (NULL);
		}
		i = 0;
		while (i < size)
		{
			hash_table->array[i] = NULL;
			i++;
		}
		return (hash_table);
	}
	else
		return (NULL);
