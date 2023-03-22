#include "3-calc.h"
#include <stdio.h>

/**
 *op_add - adds two ints
 *@a: int
 *@b: int
 *Return: sum a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtract b from a
 *@a: int
 *@b: int
 *Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies a and b
 *@a: int
 *@b: int
 *Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides a by b
 *@a: int
 *@b: int
 *Return: result of a/b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *op_mod - modulo of int a divided by int b
 *@a: int
 *@b: int
 *Return: remainder a/b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
