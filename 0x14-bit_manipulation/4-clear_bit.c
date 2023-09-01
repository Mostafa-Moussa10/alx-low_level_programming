#include "main.h"

/**
 * clear_bit - function to set bit
 * @n: pointer to integer
 * @index: number of bit
 * Return: 1 if it worked, or -1 if an erroe occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}

