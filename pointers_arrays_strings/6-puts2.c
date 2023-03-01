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
 *puts2 -prints alternate characters of a string
 *@str: string to be analysed
 */

void puts2(char *str)
{
	int len;
	int n;

	len = _strlen(str);
	n = 0;

	while (n < len)
	{
		_putchar(str[n]);
		n = n + 2;
	}
	_putchar('\n');
}
