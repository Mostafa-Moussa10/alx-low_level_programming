#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function to print the numbers for 0 to 9
 */


void print_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
}
