#include "main.h"
/**
*_strlen -returns lenght of a string
*@s: -char input string
*Return: (n) lenght of string
*/

int _strlen(char *s)
{
	int n;

	n = 0;

	while (*s != '\0')
	{
		s = s + 1;
		n = n + 1;
	}
	return (n);
}
/**
 *puts_half -prints half the characters of a string
 *@str: string to be analysed
 */

void puts_half(char *str)
{
	int len;
	int n;

	len = _strlen(str);
	n = ((len + 1) / 2); /* sets start to middle */

	while (n < len)
	{
		_putchar(str[n]);
		n = n + 1;
	}
	_putchar('\n');
}
