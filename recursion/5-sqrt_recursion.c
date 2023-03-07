#include "main.h"
/**
 *sqrt_helper - Newtonian method of finding sqaure roots
 *@n: the number to be rooted
 *@i: square root
 *Return: i, the sqaure root
 */

int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (sqrt_helper(n, i + 1));
}

/**
 *_sqrt_recursion - returns the naural sqaure root of a number
 *@n: number to be rooted
 *Return: square root or -1 if no natural root exists
 */

int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 0));
}
