#include "main.h"

/**
 *print_numbers -prints 0-9
 */

void print_numbers(void)
{
	char ch;

	ch = 0;
	while (ch <= 9)
	{
		_putchar(ch + '0');
		ch = ch + 1;
	}
	_putchar('\n');
}
