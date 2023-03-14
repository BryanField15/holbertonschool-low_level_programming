#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars initialized with a specific char
 *@c: specific char
 *@size: size of array from main
 *Return: NULL if size = 0 or it fails, else returns a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size);

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}

	i = 0;

	while  (i < size)
	{
		ptr[i] = c; /*initialize the array*/
		i = i + 1;
	}
	return (ptr);
}
