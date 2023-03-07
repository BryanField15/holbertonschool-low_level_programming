#include "main.h"

/**
 *prime_help -runs the prime finding algorithm
 *@i: increment through all values between 2 and n
 *@n: integer to be evaluated
 *Return: 1 if prime, 0 if not
 */

int prime_help(int i, int n)
{
	if (n < 2)
		return (0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);

	return (prime_help(i + 1, n));
}


/**
 *is_prime_number -determines is an integer n is prime or not
 *@n: interger to be evaluated
 *Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	return (prime_help(2, n));
}
