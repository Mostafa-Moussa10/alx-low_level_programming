#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print all numbers from 0 to 9 except 2 and 4
 */

void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		printf("%d", i);
	}
	printf("\n");
}

