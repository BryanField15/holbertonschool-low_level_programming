#include "main.h"
#include <stdio.h>

/**
 *main - function that prints argv
 *@argc: number of argumants in the command line
 *@argv: array of strings that contain each of the commands in the command line
 *Return: name of program
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (argc > i)
	{
		printf("%s\n", argv[i]);
		i = i + 1;
	}
	return (0);
}
