#include <stdio.h>

/**
 *main -prints alphabet a-z, A-Z
 *Return: 0
 */

int main(void)
{
	char ch;

	ch = 'a';
		while (ch <= 'z')
		{
			printf("%c", ch);
			ch = ch + 1;
		}
	ch = 'A';
		while (ch <= 'Z')
		{
			printf("%c", ch);
			ch = ch + 1;
		}
	putchar('\n');
	return (0);
}
