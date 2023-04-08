#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a specific index
 *@head: pointer to pointer
 *@index: the index of the node that should be deleted.
 *Return: 1 if successful, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_target, *helper;
	unsigned int position;

	position = 0;
	node_target = *head;
	helper = *head;

	if (node_target == NULL)
		return (-1);
	if (index == 0)
	{
		*head = helper->next;
		if (helper->next != NULL)
		{
			helper->next->prev = NULL;
		}
		free(helper);
		return (1);
	}
	while (position != index)
	{
		if (node_target == NULL)
			return (-1);
		node_target = node_target->next;
		position = position + 1;
	}
	helper = node_target->prev;
	if (helper != NULL)
	{
	helper->next = node_target->next;
	}
	if (node_target->next != NULL)
	{
		node_target->next->prev = helper;
	}
	free(node_target);
	return (1);
}
