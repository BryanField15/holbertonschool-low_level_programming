#include <stdio.h>
#include "main.h"

/**
 *print_array -prints the elements of an array of size n
 *@a: array to be analysed
 *@n: number of elements in the array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
		i = i + 1;
	}
	printf("\n");
}
