#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all of its parameters
 * @n: first parameter
 * Return: int sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sta;
	unsigned int i;
	int total;

	va_start(sta, n);

	if (n == 0)
	{
		return (0);
	}

	i = 0;
	total = 0;
	while (i < n)
	{
		total = total + va_arg(sta, int);
		i = i + 1;
	}
	va_end(sta);
	return (total);
}
