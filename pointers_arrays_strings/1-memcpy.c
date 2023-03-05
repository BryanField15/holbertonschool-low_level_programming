#include "main.h"

/**
 *_memcpy -copies n bytes from memory area src to memory area dest
 *@dest: destination memory
 *@src: source memory
 *@n: size of memory copied from src to dest
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *csrc = (char *)src;
	char *cdest = (char *)dest;
	unsigned int i;

	i = 0;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i = i + 1;
	}
	return (dest);
}
