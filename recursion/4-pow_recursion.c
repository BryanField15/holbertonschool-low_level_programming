#include "main.h"

/**
 *_pow_recursion -raises an integer to a power
 *@x: base
 *@y: index
 *Return: if y < 0 return -1 else return answer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (1);
}
