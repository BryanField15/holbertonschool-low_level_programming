#include "main.h"
#include <stdio.h>

/**
*cap_string - capitalizes the first letter of each word in a string
*@str: string to be evaluated
*Return: str, the capitalized string
*/

char *cap_string(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
		    str[i - 1] == '\n' || str[i - 1] == '.')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		i = i + 1;
	}
	return (str);
}
