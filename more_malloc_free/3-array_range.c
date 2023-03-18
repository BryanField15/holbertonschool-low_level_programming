#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *array_range - creates an ordered array of intergers
 *@min: lower limit of range of ints to be included in the array
 *@max: upper limit of range of ints to be included in the array
 *Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(ptr) * (max - min));
	if (ptr == NULL)
	{
		return (NULL);
	}

	i = min;
	while (i <= max)
	{
		ptr[i] = i;
		i = i + 1;
	}
	return (ptr);
}
