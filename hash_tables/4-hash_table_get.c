#include "hash_tables.h"

/**
 *hash_table_get - etrieves a value associated with a key.
 *@ht: hash table to invetsigate
 *@key: key to retrieve
 *Return: key value or NULL on failure
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];
	if (tmp == NULL)
	{
		return (NULL);
	}
	while (strcmp(tmp->key, key) != 0)
	{
		tmp = tmp->next;
	}
	return (tmp->value);
}
