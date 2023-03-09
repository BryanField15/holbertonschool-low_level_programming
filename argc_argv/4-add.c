#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 *check_digit - funtion to check each digit in argv
 *@s: char star input to be checked
 *Return: 0 if it is a gigit or 1 in other character
 */

int check_digit(char *s)
{
	int  j = 0;

	while (s[j] != '\0')
	{
		if (isdigit(s[j]) != 0)
			j = j + 1;
		else
			return (0);
	}
	return (1);
}

/**
 *main - function that prints the result of the additon of two numbers
 *@argc: number of arguments in the command line
 *@argv: array of strings that contain each of the commands in the command line
 *Return: 0 if successful, 1 if there is an error
 */

int main(int argc, char *argv[])
{
	int add;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	add = 0;
	i = 1;

	while (i < argc)
	{

		if (check_digit(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		else
		{
			add = add + atoi(argv[i]);
		}
		i = i + 1;
	}
	printf("%d\n", add);
	return (0);
}
