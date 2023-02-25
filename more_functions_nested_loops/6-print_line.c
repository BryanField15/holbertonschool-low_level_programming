#include "main.h"

/**
 *print_line - prints a line of n lenght
 *@n: number of times the _ character should be printed
 */

void print_line(int n)
{
	char ch;

	if  (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		while (ch <= n)
		{
			_putchar('_');
			ch = ch + 1;
		}
		_putchar('\n');
	}
}
