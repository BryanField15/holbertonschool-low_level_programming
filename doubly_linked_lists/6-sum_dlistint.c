#include "lists.h"

/**
 * sum_dlistint - sums of all the data (n) of a dlistint_t linked list
 * @head: pointer to node[0]
 * Return: sum of data or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
