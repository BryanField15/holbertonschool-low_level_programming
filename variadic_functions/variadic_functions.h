#ifndef _VARIADIC_FUNCTIONS_H_
#define  _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>

/**
 * struct check - Struct used to match user input with function
 * @op: The operator
 * @f: The function associated
 */
typedef struct check
{
	char *op;
	void (*f)(va_list args);
} check_t;

void print_int(va_list args);
void print_char(va_list args);
void print_str(va_list args);
void print_float(va_list args);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

#endif /*  _VARIADIC_FUNCTIONS_H_ */
