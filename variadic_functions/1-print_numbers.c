#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - prints numbers
 * @n: number of ints passed to the function
 * @separator:  the string to be printed between numbers
 * Return: int sum
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);

	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(arg, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i = i + 1;
	}
	va_end(arg);
	printf("\n");
}
