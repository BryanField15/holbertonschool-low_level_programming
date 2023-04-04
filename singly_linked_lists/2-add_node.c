#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - adds a node to the beginning of a list_t list
 *@head: pointer to to a pointer of list_t type
 *@str: pointer to string to be included in new node
 *Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (head != NULL && str != NULL)
	{
		ptr = malloc(sizeof(list_t));
		if (ptr == NULL)
		{
			return (NULL);
		}

		ptr->str = strdup(str);
		ptr->len = strlen(str);
		ptr->next = *head;
		*head = ptr;
	}
	return (*head);
}
