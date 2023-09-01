#include "main.h"

/**
 * get_bit - function to get bit value 0 or 1
 * @n: number to check its bit
 * @index: bit number
 * Return: the value of given bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n & (1 << index))
		return (1);
	else
		return (0);
}

