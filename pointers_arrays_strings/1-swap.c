#include "main.h"
#include <stdio.h>

/**
 *swap_int - swaps the values of two integers
 *@a: pointer int a
 *@b: pointer in b
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
