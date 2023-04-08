#include "lists.h"

/**
 * _free_dlistint - Free a list
 *
 * @head: A pointer to the first element of a list to free
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
