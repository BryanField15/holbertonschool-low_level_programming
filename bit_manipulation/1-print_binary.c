#include "main.h"

/**
 *print_binary - prints the binary representation of a number
 *@n: integer to convert
 *Return: void
 */

void print_binary(unsigned long int n)
{
	int shift = 0;

	while ((n >> shift) > 0)
	{
		shift = shift + 1;
	}
	shift = shift - 1;

	while (shift >= 0)
	{
		if (n & (1 << shift))
		{
			_putchar('1');
		}
		else
			_putchar('0');
		shift = shift - 1;
	}
	if (n == 0)
	{
		_putchar('0');
	}
}
