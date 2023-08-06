#include "main.h"

/**
 * flip_bits - function to flip bits
 * @n: integer to flip
 * @m: second number
 * Return: the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int count = 0;

	while (num)
	{
		if (num & 1)
			count++;
		num = num >> 1;
	}
	return (count);
}

