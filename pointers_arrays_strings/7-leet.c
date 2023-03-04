#include "main.h"

/**
 *leet - encodes a string by replacing letter with numbers
 *@str: string input to be encoded
 *Return: str, encoded string
 */

char *leet(char *str)
{
	int i;
	int j;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replace[] = {'4', '3', '0', '7', '1'};

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while  (j <= 9)
		{
			if (str[i] == find[j])
			{
				str[i] = replace[j / 2];
				j = 9;
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return (str);
}
