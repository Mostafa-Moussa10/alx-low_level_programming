#include "main.h"
#include <stdio.h>

/**
 * main - function to print number of arguments
 * @argc: number of arguments
 * @argv: string of arguments
 *
 * Return: 0 if success
 */

int main(int argc, char **argv)
{

	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

