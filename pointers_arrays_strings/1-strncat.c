#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: desitination array
 *@src: source array
 *@n: number of bytes at source
 *Return: dest, the address of the first character in dest array
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i = i + 1;
	}
	return (dest);
}
