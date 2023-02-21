#include <stdio.h>
/**
 *main -prints alphabet in reverse
 *Return: 0
 */

int main(void)
{
	char ch;

	ch = 'z';
	while (ch > 'a')
	{
		putchar(ch);
		ch = ch - 1;
	}
	putchar('\n');
	return (0);
}
