#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to get the multiplication of two numbers
 *
 * @argc: number of arguments
 * @argv: sting of arguments
 *
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}

