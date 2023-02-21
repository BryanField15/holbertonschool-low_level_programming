#include <stdio.h>
/**
 *main -prints numbers 0-9
 *Return: 0
 */

int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		printf("%d", i);
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
