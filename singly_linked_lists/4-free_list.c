#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - frees a list_t list
 *@head: pointer to to a pointer of list_t type
 *Return: void
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		if (head->str != NULL)
		{
			free(head->str);
		}
		free(head);
	}
}
