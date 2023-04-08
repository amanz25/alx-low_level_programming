#include "hash_tables.h"

/**
 * create_node - create a node
 * @key: key for the data
 * @value: data to be stored
 *
 * Return: pointer to the new node, or NULL on failure
 */
shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *s;

	s = malloc(sizeof(shash_node_t));
	if (s == NULL)
		return (NULL);
	s->key = strdup(key);
	if (s->key == NULL)
	{
		free(s);
		return (NULL);
	}
	s->value = strdup(value);
	if (s->value == NULL)
	{
		free(s->key);
		free(s);
		return (NULL);
	}
	s->next = s->snext = s->sprev = NULL;
	return (s);
}

/**
 * shash_table_set - sets a key to a value in the hash table
 * @ht: sorted hash table
 * @key: key to the data
 * @value: data to add
 *
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *new_value;
	shash_node_t *shn, *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	shn = create_node(key, value);
	if (shn == NULL)
		return (0);
	shn->next = ht->array[index];
	ht->array[index] = shn;
	add_to_sorted_list(ht, shn);
	return (1);
}

/**
 * shash_table_get - retrieve a value from the hash table
 * @ht: hash table
 * @key: key to the data
 *
 * Return: the value associated with key, or NULL on failure
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

/**
 * create_shash_table - creates a sorted hash table
 * @size: size of the hash table
 *
 * Return: pointer to the new table, or NULL on failure
 */
shash_table_t *create_shash_table(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);
	sht->size = size;
	sht->shead = NULL;
	sht->stail = NULL;
	sht->array = malloc(sizeof(shash_node_t) * size);
	if (sht->array == NULL)
	{
		free(sht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		sht->array[i] = NULL;
	}
	return (sht);
}
