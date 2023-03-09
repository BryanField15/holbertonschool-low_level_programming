#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - function that prints the result of the multiplication of two numbers
 *@argc: number of argumants in the command line
 *@argv: array of strings that contain each of the commands in the command line
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
