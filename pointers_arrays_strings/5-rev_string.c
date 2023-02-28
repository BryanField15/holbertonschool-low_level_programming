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
 *rev_string -reverses a string
 *@s: inputted array reversed
 */

void rev_string(char *s)
{
	int len;
	int n;
	int h; /* helper */

	len = _strlen(s) - 1; /* gets array size sans '\0' */
	n = 0; /* sets index to start of array */

	while (n < (len / 2)) /* swap out first half; < not <= to acc 4 odd# */
	{
		h = s[n];
		s[n] = s[len - n];
		s[len - n] = h;

		n = n + 1;
	}
}
