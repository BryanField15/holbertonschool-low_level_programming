#include "main.h"

/**
 *_strlen_recursion - returns the lenght of a string
 *@s: char type string to be evaluated
 *Return: string lenght as an int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
