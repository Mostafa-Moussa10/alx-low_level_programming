#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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

	for (i = 1; i < argc; i++)
	{
		if (!(atoi(argv[i])) || atoi(argv[i]) < 0)
		{
			printf("Error\n");
			exit(1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
