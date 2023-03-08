#include "main.h"
#include <stdio.h>

/**
 *main - function that prints its own name
 *@argc: number of argumants in the command line
 *@argv: array of strings that contain each of the commands in the command line
 *Return: name of program
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
