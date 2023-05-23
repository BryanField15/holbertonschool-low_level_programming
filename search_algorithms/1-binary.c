#include "search_algos.h"

/**
 * print_array - prints an array given a range
 * @array: array to printed
 * @start: starting index
 * @end: end point
 * Return: void
 */

void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	i = start;

	printf("Searching in array:");
	while (i < end)
	{
		printf("%d, ", array[i]);
		i = i + 1;
	}
	printf("%d\n", array[i]);
}

/**
 * binary_search - binary search function
 * @array: array to be searched
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left;
	size_t right;
	size_t mid_point;

	if (array == NULL)
	{
		return (-1);
	}

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_array(array, left, right);
		mid_point = (left + right) / 2;
		if (array[mid_point] ==  value)
		{
			return (mid_point);
		}
		else if (array[mid_point] < value)
		{
			left = mid_point + 1;
		}
		else
		{
			right = mid_point - 1;
		}
	}
	return (-1);
}
