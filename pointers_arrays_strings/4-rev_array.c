#include "main.h"

/**
*reverse_array - print an array of integers
*@a: an array of integers
*@n: the number of elements to swap
*/

void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	i = 0;

	while (i < (n / 2))
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i = i + 1;
	}
}
