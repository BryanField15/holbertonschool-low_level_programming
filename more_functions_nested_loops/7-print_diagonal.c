#include "main.h"

/**
 *print_diagonal -takes int n and prints a diagonal line of length n
 *@n: int n inputed
 */

void print_diagonal(int n)
{
	char r;/*row*/
	char c;/*column*/

	r = 0;

	while (n > 0)
	{
		c = r;
		while (c > 0)
		{
			_putchar(' ');
			c = c - 1;
		}
		_putchar('\\');
		_putchar('\n');
		r = r + 1;
		n = n - 1;
	}
	if (r <= 0)
	{
		_putchar('\n');
	}
}
