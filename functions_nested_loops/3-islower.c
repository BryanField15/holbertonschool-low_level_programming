#include "main.h"

/**
 *int _islower(int c) -checks for lowercase character
 *@c: character to be checked for lowercase
 *Return: 1 if lowercase, 0 if not lowercase
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
