#include "main.h"
#include <stdlib.h>

/**
 *_strdup - returns a pointer to a new string which is a duplicate str
 *@str: string to be duplicated
 *Return: NULL if str NULL or  insufficient mem. Ptr to dup on success.
 */
char *_strdup(char *str)
{
	char *s;
	char *dup;
	int i;
	int j;

	s = str;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (s[i] != '\0')
	{
		i = i + 1;
	}

	dup = malloc(i + 1);
	j = 0;
	i = 0;

	while  (s[i] != '\0')
	{
		if (dup == NULL)
		{
			return NULL;
		}
		dup[j] = s[i];
		i = i + 1;
		j = j + 1;
	}
	dup[j] = '\0';
	return (dup);
}
