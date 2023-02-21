#include <stdio.h>

/**
 *main -prints alphabet sans e and q
 *Return: 0
 */

int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
			printf("%c", ch);
		ch = ch + 1;
	}
	putchar('\n');
	return (0);
}
