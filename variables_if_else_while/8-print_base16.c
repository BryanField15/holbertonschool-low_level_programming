#include <stdio.h>
/**
 *main -prints 16 digits of hexadecimal
 *Return: 0
 */

int main(void)
{
	int i;
	char ch;

	i = 0;
		while (i <= 9)
		{
			putchar('0' + i);
			i = i + 1;
		}
		ch = 'a';
		while (ch <= 'g')
		{
			putchar(ch);
			ch = ch + 1;
		}
	putchar('\n');
	return (0);
}
