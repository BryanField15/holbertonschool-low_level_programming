#include "main.h"
#include <stdlib.h>

/**
 *_strlen - determine string length
 *@str: sting to be evaluated
 *Return: a, the string length
 */

int _strlen(char *str)
{
	int a;

	a = 0;

	while (str[a] != '\0')
	{
		a = a + 1;
	}
	return (a);
}

/**
 *str_concat - returns a pointer to a new concatenated string
 *@s1: string to be concatenated
 *@s2: string to be concatenated
 *Return: NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1;
	int len_s2;
	char *dup;
	int i;
	int k;
	int j;

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	dup = malloc(sizeof(*dup) * (len_s1 + len_s2 + 1));
	i = 0;
	k = 0;

	while (s1[i] != '\0')
	{
		dup[k] = s1[i];
		k = k + 1;
		i = i + 1;
	}

	j = 0;

	while (s2[j] != '\0')
	{
		dup[k] = s2[j];
		k = k + 1;
		j = j + 1;
	}
	dup[k] = '\0';
	return (dup);
}
