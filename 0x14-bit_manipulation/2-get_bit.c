#include "main.h"

/**
 * get_bit - function to get the bit number index
 * @n: number to check
 * @index: index of bit required
 * Return: bit required
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 0;
	unsigned int i = 0;
	unsigned long int x = n;

	while (n)
	{
		i++;
		n = n >> 1;
	}
	if (i < index)
		return (-1);

	bit = (x >> index) & 1;


	return (bit);
}
