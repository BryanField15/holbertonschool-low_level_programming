#include "main.h"

/**
 *times_table - prints the 9 times tables starting at 0
 */

void times_table(void)
{
	int i; /* integer */
	int t; /* timesed by number */
	int p; /* product */

	i = 0;
	while (i <= 9)
	{
		t = 0;
		while  (t <= 9)
		{
			p = (i * t);

			if (p > 9)
			{
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
			}
			else if (t != 0)
			{
				_putchar(' ');
				_putchar(p + '0');
			}
			else
			{
				_putchar(p + '0');
			}
			if (t != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			t = t + 1;
		}
		_putchar('\n');
		i = i + 1;
	}
}
