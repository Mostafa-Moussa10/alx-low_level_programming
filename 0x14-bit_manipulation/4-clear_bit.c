#include "main.h"

/**
 * clear_bit - function to clear bit (set to 0)
 * @n: pointer to the int
 * @index: index of bit
 * Return: 1 if it worked, -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 0)
		return (-1);

	*n = *n & 1 << index;

	return (1);
}
