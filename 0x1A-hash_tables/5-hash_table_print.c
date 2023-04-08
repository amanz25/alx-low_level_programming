#include "hash_tables.h"
/**
 * hash_table_print - prints hashtable
 * @ht: the hash table you want to print
 */
void hash_table_print(const hash_table_t *ht)
{

	unsigned long int i;
	hash_node_t *node;
	short int comma = 0;

	if (ht == NULL)
		return;

	putchar('{');
	i = 0;
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (comma)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			node = node->next;

			if (comma == 0)
				comma = 1;
		}
		i++;
	}
	printf("}\n");
}
