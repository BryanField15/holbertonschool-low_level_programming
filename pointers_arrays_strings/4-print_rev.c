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
*print_rev -prints a given string in reverse
*@s: -char input
*/

void print_rev(char *s)
{
	int len;
	int n;

	len = _strlen(s) - 1; /*gives array size of s without '\0' */
	n = len; /* n is set to lenght of array */

	while (n >= 0)
	{
		_putchar(s[n]); /* putchar starts at max n ie last letter */
		n = n - 1; /* loops backwards through string */
	}
	_putchar('\n');
}
