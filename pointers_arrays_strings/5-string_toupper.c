#include "main.h"

/**
*string_toupper - changes lower- to uppercase
*@c: string input to be converted
*Return: c
*/

char *string_toupper(char *c)
{
	int i;

	i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		}
		i = i + 1;
	}
	return (c);
}
