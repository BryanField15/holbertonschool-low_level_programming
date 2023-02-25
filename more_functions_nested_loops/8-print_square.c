#include "main.h"

/**
 *print_square - prints a square a of size n
 *@size: int inputed
 */

void print_square(int size)
{
	char r; /*row*/
	char c; /*column*/

	r = 0;
	while (r < size)
	{
		c = 0;
		while (c < size)
		{
			_putchar('#');
			c = c + 1;
		}
		_putchar('\n');
		r = r + 1;
	}
	if (size < 1)
	{
		_putchar('\n');
	}
}
