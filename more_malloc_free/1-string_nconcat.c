#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *_strlen - determine string length
 *@str: sting to be evaluated
 *Return: a, the string length
 */

unsigned int _strlen(char *str)
{
	unsigned int a;

	a = 0;

	while (str[a] != '\0')
	{
		a = a + 1;
	}
	return (a);
}

/**
 *string_nconcat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes of string 2
 *Return: pointer to newly allocated memory space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dup;
	unsigned int len_tot, len_s2, i, j, k;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	len_s2 = n;

		if (n >= _strlen(s2))
		{
			len_s2 = _strlen(s2);
		}
	len_tot = _strlen(s1) + len_s2 + 1;
	dup  = malloc(sizeof(*dup) * len_tot);
	if (dup == NULL)
	{
		return (NULL);
	}
	i = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		dup[k] = s1[i];
		k = k + 1;
		i = i + 1;
	}
	j = 0;
	while (j < len_s2)
	{
		dup[k] = s2[j];
		k = k + 1;
		j = j + 1;
	}
	dup[k] = '\0';
	return (dup);
}
