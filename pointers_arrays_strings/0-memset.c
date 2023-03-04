#include "main.h"

/**
 *_memset -sets the first n bytes of the memory area pointed to by s to value b
 *@s: pointer to memory area that will be filled
 *@n: number of bytes to fill
 *@b: constant byte
 *Return: pointer to memory are s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i = i + 1;
	}
	return (s);
}
