#include "main.h"

/**
 *more_numbers - prints 0-14 10 times over
 */

void more_numbers(void)
{
	int i;
	char ch;

	i = 0;
	while (i <= 9)
	{
		ch = 0;
		while (ch <= 14)
		{
			if (ch > 9)
			{
				_putchar(ch / 10 + '0');
			}
			_putchar(ch % 10 + '0');
			ch = ch + 1;
		}
		_putchar('\n');
		i = i + 1;
	}
}
