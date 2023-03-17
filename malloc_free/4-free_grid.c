#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *free_grid - grid to be freed
 *@grid: 2d array to be freed
 *@height: height of array
 *Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	i = 0;
	while (i <= height)
	{
		free(grid[i]);
		i = i + 1;
	}
	free(grid);
}
