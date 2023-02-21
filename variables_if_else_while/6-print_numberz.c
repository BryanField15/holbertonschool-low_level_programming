#include <stdio.h>

/**
 *main -prints all single digit numbers
 *Return: 0
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar('0' + i);
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
