#include "main.h"

/**
 *factorial - function that calcualtes n!
 *@n: internger to start from
 *Return: n factorial solution or -1 if n < 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
