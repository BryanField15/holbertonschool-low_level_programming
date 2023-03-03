#include "main.h"

/**
 *_strlen -returns lenght of a string
 *@s: char type lenght of string
 *Return: (n) lenght of string
 */

int _strlen(char *s)
{
	int n;

	n = 0;

	while (*s != '\0')
	{
		s = s + 1;
		n = n + 1;
	}
	return (n);
}

/**
 *_strncat - concatenates two strings
 *@dest: desitination array
 *@src: source array
 *@n: number of bytes at source
 *Return: dest, the address of the first character in dest array
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i = i + 1;
	}
	while (i < n)
	{
		dest[dest_len + i] = '\0';
		i = i + 1;
	}
	return (dest);
}
