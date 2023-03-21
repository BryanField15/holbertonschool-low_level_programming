#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *array_iterator - executes a function on an array
 *@array: pointer to array of ints
 *@size: size of the array
 *@action: pointer to the fuction to be executed on the array
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i = i + 1;
	}
}
