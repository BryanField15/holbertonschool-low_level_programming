#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a specific index
 * @h: pointer to a pointer
 * @idx: index where new node should be inserted
 * @n: int to be added to structure
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *book_end_front = *h;
	dlistint_t *book_end_back = NULL;
	unsigned int position = 0;

	if (h == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}

	while (position != idx)
	{
		book_end_front = book_end_front->next;
		position = position + 1;
	}

	book_end_back = book_end_front->next;
	book_end_front->next = new_node;
	book_end_back->prev = new_node;
	new_node->next = book_end_back;
	new_node->prev = book_end_front;
	return (new_node);
}
