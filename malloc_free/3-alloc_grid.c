#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *alloc_grid - returns a pointer to a 2d array of integers
 *@width: height of array
 *@height: width of array
 *Return: NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **mem;
	int h;
	int w;
/*allocate memory for array of pointers to pointers*/

	mem = malloc(sizeof(*mem) * height);
	if (mem == NULL)
		return (NULL);
/*aloocate memory to the array of pointers*/
	h = 0;
	while (h < height)
	{
		mem[h] = malloc(sizeof(**mem) * width);
		if (mem[h] == NULL)
		{
			return (NULL);
		}
/*initialize the array with given value*/
		w = 0;
		while (w < width)
		{
			mem[h][w] = 0;
			w = w + 1;
		}
		h = h + 1;
	}
/*return a pointer to the array of pointers */
	return (mem);
}
