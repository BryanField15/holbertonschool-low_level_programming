#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - prints strings
 * @n: number of strings passed to the function
 * @separator:  the string to be printed between numbers
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	const char *str;

	va_start(arg, n);

	i = 0;
	str = va_arg(arg, const char *);
	while (i < n)
	{
		if (str == NULL)
		{
			printf("nil");
		}
		else
			printf("%s", str);

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i = i + 1;
		str = va_arg(arg, const char *);
	}
	va_end(arg);
	printf("\n");
}
