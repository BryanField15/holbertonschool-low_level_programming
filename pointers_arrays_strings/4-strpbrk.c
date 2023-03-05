#include <stddef.h>
#include "main.h"

/**
 *_strpbrk -searches a string for any of a set of bytes
 *@s: string to be evalauted
 *@accept: string to match
 *Return: pointer to byte in s or NULL if no byte found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			else
				j = j + 1;
		}
		i = i + 1;
	}
	return (NULL);
}
