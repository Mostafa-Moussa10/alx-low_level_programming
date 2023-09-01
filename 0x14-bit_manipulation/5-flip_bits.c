#include "main.h"

/**
 * flip_bits - function to count how many bit to flip
 * @n: first number
 * @m: second number
 * Return: number of fliped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int x = n ^ m;

	while (x)
	{
		if (x & 1)
			count++;
		x = x >> 1;
	}
	return (count);
}

