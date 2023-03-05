#include <stddef.h>
#include "main.h"

/**
 *_strchr -returns the pointer to first occurence of letter c
 *@s: string to evaluate
 *@c: character of interest
 *Return: pointer to first occurence of character c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s != c)
		{
			s = s + 1;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
