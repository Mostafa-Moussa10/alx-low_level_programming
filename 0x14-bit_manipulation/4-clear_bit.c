#include "main.h"

/**
 * clear_bit - function to clear bit (set to 0)
 * @n: pointer to the int
 * @index: index of bit
 * Return: 1 if it worked, -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(10 << (index - 1));
	return (1);
}
