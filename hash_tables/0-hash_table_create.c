#include "hash_tables.h"

/**
 *hash_table_create - creates a new hash table
 *@size: - size of the array
 *Return: pointer to newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int i;

	if (size <= 0)
	{
		return (NULL);
	}

	new = malloc(sizeof(*new));
	if (new == NULL)
	{
		return (NULL);
	}

	new->size = size;
	new->array = malloc(sizeof(hash_node_t) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		new->array[i] = NULL;
		i = i + 1;
	}

	return (new);
}
