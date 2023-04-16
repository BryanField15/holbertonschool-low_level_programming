#include "hash_tables.h"

/**
 *hash_table_print - prints a hash table
 *@ht: hash table to print
 *Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	int first;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	i = 0;
	first = 1;
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (first != 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", temp->key, temp->value);
			first = 0;
			temp = temp->next;
		}
		i = i + 1;
	}
	printf("}\n");
}
