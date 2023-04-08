#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to node[0]
 * @index: the index of the node, starting from 0
 * Return: pointer to the nth node or NULL on failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nth_node;
	unsigned int position;

	if (head == NULL)
	{
		return (NULL);
	}

	nth_node = head;
	position = 0;

	while (position < index)
	{
		position  = position + 1;
		nth_node = nth_node->next;
	}
	return (nth_node);
}
