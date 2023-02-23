#include "main.h"

/**
*_abs -prints the absolute value of a number
*@i: the integer to be evaluated
*Return: abs i
*/

int _abs(int i)

{
	if (i < 0)
	{
		i = i * -1;
	}
	return (i);
}
