#include "main.h"
#include <stddef.h>

/**
 *_strstr -finds the first occurrence of substring needle in the haystack
 *@haystack: string to be searched
 *@needle: substring to be searched for
 *Return: pointer to the beginning of the located substring, or
 *NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack != '\0')
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i = i + 1;
			} while (haystack[i] == needle[i]);
		}
		haystack = haystack + 1;
	}
	return ('\0');
}
