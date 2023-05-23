#include "search_algos.h"

/**
 * linear_search - linear search function
 * @array: array to be searched
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located or -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
	{
		return (-1);
	}

	index = 0;
	while (index < size)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
		index = index + 1;
	}
	return (-1);
}
