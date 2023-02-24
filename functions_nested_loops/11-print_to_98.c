#include <stdio.h>
#include "main.h"

/**
*print_to_98 -prints all the natural numbers from n to 98
*@n: user inputed number
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n = n + 1;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n = n - 1;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
