#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - counts the elements of a list_t list
 *@h: pointer to list_t type
 *
 *Return: number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count = count + 1;
	}
	return (count);
}
