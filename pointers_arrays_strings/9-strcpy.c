#include "main.h"

/**
 *_strcpy -copies a string from source to destination
 *@dest: pointer to the destination that will store the copied string
 *@src: address of the string tp be copied
 *Return: (p) a pointer to the beginningof the destination array
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest = dest + 1;
		src = src + 1;
	}
	*dest = '\0';
	return (p);
}
