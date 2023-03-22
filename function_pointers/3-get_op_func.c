#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 *get_op_func - selects the correct function to perform the operation \
 *asked for by the user
 *@s: the operator passed as argument to the program
 *@int: int 1
 *@int: int 2
 *Return: correct answer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},/*the + adress is ops[i].op and the op_add is ops[i].f*/
		{"-", op_sub},/*according to the op_t type structure*/
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	long unsigned int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i = i + 1;
	}
	printf("Error\n");
	exit (99);
}
