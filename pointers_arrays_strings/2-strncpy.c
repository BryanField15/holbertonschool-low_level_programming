#include "main.h"
#include <stddef.h>

/**
*_strncpy -copies a string
*@dest: destination
*@src: source
*@n: size of array
*Return: p, pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *p = dest;

	if (dest == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}

	while (i < n)
	{
		i = i + 1;
		dest[i] = '\0';
	}
	return (p);
}
