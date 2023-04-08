#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end  of a dlistint_t list
 * @head: pointer to a pointer to the head
 * @n: int value to be added in new node
 * Return: pointer to new element or NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *traverse;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	traverse = *head;

	if (traverse == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (traverse->next != NULL)
		{
			traverse = traverse->next;
		}

		traverse->next = new_node;
		new_node->prev = traverse;
	}

	return (*head);
}
