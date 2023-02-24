#include "main.h"
/**
 *jack_bauer -prints every minute of the day
 */

void jack_bauer(void)
{
	int hours_tens;
	int hours_ones;
	int mins_tens;
	int mins_ones;

	hours_tens = 0;
	while (hours_tens <= 2)
	{
		hours_ones = 0;
		while (hours_ones <= 9)
		{
			if (hours_tens == 2 && hours_ones == 4)
				return;
			mins_tens = 0;
			while (mins_tens <= 5)
			{
				mins_ones = 0;
				while (mins_ones <= 9)
				{
					_putchar(hours_tens + '0');
					_putchar(hours_ones + '0');
					_putchar(':');
					_putchar(mins_tens + '0');
					_putchar(mins_ones + '0');
					_putchar('\n');
					mins_ones = mins_ones + 1;
				}
				mins_tens = mins_tens + 1;
			}
			hours_ones = hours_ones + 1;
		}
		hours_tens = hours_tens + 1;
	}
}
