#include "main.h"

/**
 *print_most_numbers - prints 0-9 except 2 and 4
 */

void print_most_numbers(void)
{
	char ch;

	ch = 0;

	while (ch <= 9)
	{
		if (ch != 2 && ch != 4)
			_putchar(ch + '0');
		ch = ch + 1;
	}
	_putchar('\n');
}
