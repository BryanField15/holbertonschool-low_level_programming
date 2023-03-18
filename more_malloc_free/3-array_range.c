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
	int diff;

	if (min > max)
	{
		return (NULL);
	}

	diff = max - min + 1;

	ptr = malloc(sizeof(*ptr) * (diff));
	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i <= diff)
	{
		ptr[i] = i + min;
		i = i + 1;
	}
	return (ptr);
}
