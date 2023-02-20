#include <stdio.h>
#include <stdbool.h>
/**
 *main -prints alphabet a-z
 *Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
