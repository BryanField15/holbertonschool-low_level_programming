#include "lists.h"

/**
 *dlistint_len - returns the number of elements in a dlitint_t lisy
 *@h: pointer to list
 *
 *Return: count, the number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count = count + 1;
	}
	return (count);
}
