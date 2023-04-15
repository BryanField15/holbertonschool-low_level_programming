#include "hash_tables.h"
/**
 *make_node - makes a new node
 *@key: key of node
 *@value: value of node
 *Return: pointer to the new node or NULL on failure
 */

hash_node_t *make_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return  (NULL);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	return (new_node);
}

/**
 *hash_table_set - adds and element to the hash table
 *@ht: hash table to be undated
 *@key: key is the key
 *@value: value associated with the key
 *Return: 1 on success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	new_node = make_node(key, value);
	if (new_node == NULL)
	{
		return (0);
	}
	if (ht->array[index] != NULL && strcmp(key, ht->array[index]->key) == 0)
		{
			ht->array[index]->value = (char *)value;
			return (1);
		}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
