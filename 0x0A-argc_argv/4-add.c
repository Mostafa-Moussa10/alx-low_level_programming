#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_digit - function to check if input is digit or nou
 *
 * @s: pointer to string
 * Return: 1 if digit . 0 if not
 */

int check_digit(char *s)
{
	unsigned int i = 0;

	for (i = 0; s[i] != '\n'; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
			
		}
	}
	return (1);
}

/**
 * main - function to get the sum of numbers
 * @argc: number of arguments
 * @argv: string of arguments
 * Return: 0 if success
 */

int main(int argc, char **argv)
{

	int i = 0;
	int sum = 0;

	/*check for digit*/

	for (i = 1; i < argc; i++)
	{
		if (check_digit(argv[i]))
		{
			printf("Error\n");
			exit(1);
		}
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) < 0)
		{
			printf("Error\n");
			exit(1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
