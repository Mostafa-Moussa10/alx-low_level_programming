#include "main.h"
#include <stdio.h>

/**
 * main - function to find a largest prime factor of number
 *
 * Return: 1 if success
 */

int main(void)
{
	double i = 2;
	double input = 124535448;

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
	printf("%f\n", i);

	return (1);
}

/**
 * next_prime_factor - function to get prime number
 *
 * @current_prime_factor: input factor
 *
 * Return: the next prime factor
 */

double next_prime_factor(double current_prime_factor)
{
	double i = current_prime_factor + 1;
	double j = 2;

	while (j < i)
	{
		if (i % j != 0)
		{
			j++;
		}
		else
		{
			i++;
			j = 2;
		}

	}
	return (i);
}


