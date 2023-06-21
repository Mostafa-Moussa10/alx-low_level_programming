#include "main.h"
#include <stdio.h>

/**
 * main - function to print the sum
 *
 * Return: 1 if success
 */

int main(void)
{
	int i = 0;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);

	return (1);
}




