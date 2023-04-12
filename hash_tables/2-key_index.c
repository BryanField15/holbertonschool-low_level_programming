#include "hash_tables.h"

/**
 *key_index - returns the index of a given key
 *@key: given key
 *@size: size of the array
 *
 *Return: index the key is stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, index;

	if (key == NULL)
	{
		return (0);
	}

	if (size == 0)
	{
		return (0);
	}
	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}
