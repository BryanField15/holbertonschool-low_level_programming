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

	w = 0;
	h = 0;

	if (h < 0 || w < 0)
		return (NULL);

/*allocate memory for array of pointers to pointers*/
	mem = malloc(sizeof(*mem) * height);
	if (mem == NULL)

		return (NULL);

/*aloocate memory to the array of pointers*/

	while (h < height)
	{
		mem[h] = malloc(sizeof(**mem) * width);
		if (mem[h] == NULL)
			return (NULL);

/*initialize the array with given value*/

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
