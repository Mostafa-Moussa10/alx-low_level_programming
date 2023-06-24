#include "main.h"
#include <stdio.h>

/**
 * main - functon to print fizz buzz
 *
 * Return: 1 if success
 */

int main(void)
{
	fizz_buzz();

	return (1);
}

/**
 * fizz_buzz - function to print fizz buzz sendrom
 */

void fizz_buzz(void)
{
	int n = 1;


	while (n < 100)
	{
		if (n % 3 == 0 && n % 5 != 0)
		{
			printf("Fizz");
		}
		else if (n % 3 != 0 && n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", n);
		}
		printf(" ");
		n++;
	}
	printf("Buzz \n");
}
