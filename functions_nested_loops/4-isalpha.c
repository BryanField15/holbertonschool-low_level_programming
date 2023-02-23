#include "main.h"

/**
 * _isalpha -checks for alphabetic character
 *@c: the character to be checked
 *Return: 1 if alphabetic, 0 if not alphabetic
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
