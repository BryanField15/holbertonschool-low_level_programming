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
	int j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			j = 0;
			while (haystack[i] == needle[j])
			{
				i = i + 1;
				j = j + 1;
				if (needle[j + 1] == '\0')
				{
					return (needle);
				}
			}
			i = i + 1;
		}
	}
	return ('\0');
}
