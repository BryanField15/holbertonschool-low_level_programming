#include "main.h"

/**
 *flip_bits - counts the number of bits needed flip from one number to another
 *@n: forst number to evaluate
 *@m: second number to evalaute
 *Return: nukber of bits that are different to one another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result != 0)
	{
		count = count + (xor_result & 1);
		xor_result >>= 1;
	}

	return (count);
}
