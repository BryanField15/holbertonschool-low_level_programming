#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *int_index - searches for an integer
 *@array:array of ints
 *@size: number of elements of the array
 *@cmp: pointer to the function to be used to compare values
 *Return: index of the firsr element that matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return(i);
		}
		i = i + 1;
	}
	return (-1);
}
