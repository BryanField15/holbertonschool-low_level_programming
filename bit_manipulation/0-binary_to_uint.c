#include "main.h"

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: binary number to be converted
 *Return: the converted binary number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		else if (b[i] == '0')
		{
			num <<= 1;
		}
		else if (b[i] == '1')
		{
			num = (num << 1) | 1;
		}
		i = i + 1;
	}
	return (num);
}
