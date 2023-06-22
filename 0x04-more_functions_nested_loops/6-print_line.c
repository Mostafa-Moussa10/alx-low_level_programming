#include <stdio.c>
#include "main.h"

/**
 * print_line - print a line 
 *
 * @n: length of the line
 */

void print_line(int n)
{
	int i = 0;
	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("_");
		}
		printf("\n");
	}
}
