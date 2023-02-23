#include "main.h"

/**
 *print_last_digit -prints the last digit of a number i
 *@i: the number to be evaluated
 *Return: (l), the value of the last digit
 */

int print_last_digit(int i)

{
	int l;

	l = i % 10;
	{
		if (l < 0)
		{
			l = l * -1;
			_putchar('0' + l);
		}
		else
		{
			_putchar('0' + l);
		}
		return (l);
	}
}
