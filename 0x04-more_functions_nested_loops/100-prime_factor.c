#include "main.h"
#include <stdio.h>

/**
 * main - function to find a largest prime factor of number
 *
 * Return: 1 if success
 */

int main(void)
{
	long i = 2;
	long input = 612852475143;

	while (i < input)
	{
		if (input % i == 0)
		{
			input = input /  i;
		}
		else
		{
			i = next_prime_factor(i);
		}
	}
	printf("%ld\n", i);


	return (1);
}

/**
 * next_prime_factor - function to get prime number
 *
 * @current_prime_factor: input factor
 *
 * Return: the next prime factor
 */

int next_prime_factor(int current_prime_factor)
{
	int i = current_prime_factor + 1;
	int j = 2;

	while (j < i)
	{
		if (i % j != 0)
		{
			j++;
		}
		i++;
		j = 2;

	}
	return (i);
}

