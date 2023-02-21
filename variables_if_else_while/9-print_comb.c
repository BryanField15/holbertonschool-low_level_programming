#include <stdio.h>
/**
 *main -prints all possible combinations of single-digit numbers.
 *Return: 0
 */

int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar('0' + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
