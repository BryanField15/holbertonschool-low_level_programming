#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 *print_char - prints a char
 *@args: va_list type to iterate through variable arguments
 *Return: void
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 *print_int - prints an int
 *@args: va_list type to iterate through variable arguments
 *Return: void
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 *print_float - prints a float
 *@args: va_list type to iterate through variable arguments
 *Return: void
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 *print_str - prints a string
 *@args: va_list type to iterate through variable arguments
 *Return: void
 */

void print_str(va_list args)
{
	char *str = va_arg(args, char *);

	str == NULL ? printf("(nil)") : printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: is a list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	int j;

	check_t check[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (check[j].op != NULL)
		{
			if (*check[j].op == format[i])
			{
				(check[j].f)(args);
				if (format[i + 1] != '\0')
				{
					printf(", ");
				}
			}
			j = j + 1;
		}
		i = i + 1;
	}
	va_end(args);
	printf("\n");
}
