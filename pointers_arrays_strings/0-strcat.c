#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: destination string
 *@src: source string
 *Return: p pointer to start of string dest
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i = i + 1;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i = i + 1;
		j = j + 1;
	}
	dest = '\0';
	return (p);
}
