#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node_end - adds a node to the end  of a list_t list
 *@head: pointer to to a pointer of list_t type
 *@str: pointer to string to be included in new node
 *Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	temp = malloc(sizeof(*temp));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->len = strlen(str);
	if (*head == NULL)
	{
		*head  = temp;
		return (*head);
	}
	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (*head);
}
