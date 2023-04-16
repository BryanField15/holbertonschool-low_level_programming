#include "hash_tables.h"

/**
 *hash_table_delete - deletes a hash table
 *@ht: has table to be deleted
 *Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	if (ht == NULL)
	{
		return;
	}

	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	i = 0;
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		i = i + 1;
	}
	free(ht->array);
	free(ht);
}
