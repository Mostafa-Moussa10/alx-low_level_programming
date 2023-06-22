#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function to print the numbers for 0 to 14 for 10 times
 */


void print_numbers(void)
{
	int i = 0;
	int y = 0;

	while (y < 11)
	{
		for (i = 0; i < 15; i++)
		{
			printf("%d", i);
		}
	printf("\n");
	y++;
	}
}
