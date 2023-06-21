#include <stdio.h>

/**
 * main - function to print the fibonacci numbers
 *
 * Return: 1 if success
 */

int main(void)
{
	int i = 0;
	int fib = 0;
	int pre = 1;

	while (i < 50)
	{
		printf("%d, ", fib);
		fib = pre + fib;
		pre = fib;
		i++;
	}
}
