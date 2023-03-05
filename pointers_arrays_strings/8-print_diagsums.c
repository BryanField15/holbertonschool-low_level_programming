#include <stdio.h>
#include "main.h"

/**
 *print_diagsums -prints the sum of the diagonals of a square matrix
 *@a: 2d array of type int
 *@size: size of square array
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum;
	int area;

	i = 0;
	sum = 0;
	area = size * size;
	while (i < area)
	{
		if (i % (size + 1) == 0)
			sum = sum + a[i];
		i = i + 1;
	}
	printf("%d, ", sum);

	sum = 0;
	i = 0;
	while (i < area)
	{
		if (1 % (size - 1) == 0 && i != (area - 1) && i != 0)
			sum = sum + a[i];
		i = i + 1;
	}
	printf("%d\n", sum);
}
