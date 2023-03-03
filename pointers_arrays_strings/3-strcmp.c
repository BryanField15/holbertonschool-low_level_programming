#include "main.h"

/**
*_strcmp - compares strings by comparisons of letters
*@s1: string 1 to compare
*@s2: string 2 to compare
*Return: 0 for same, or +/- for different chars
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i = i + 1;
	}
	return (s1[i] - s2[i]);
}
