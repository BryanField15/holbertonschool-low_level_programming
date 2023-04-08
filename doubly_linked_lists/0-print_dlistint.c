#include "lists.h"

/**
 *print_dlistint - prints all the elements of a dlistint_t list
 *@h: pointer to list
 *
 *Return: the number of nodes
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%u\n", h->n);
		h = h->next;
		count = count + 1;
	}
	return (count);
}
