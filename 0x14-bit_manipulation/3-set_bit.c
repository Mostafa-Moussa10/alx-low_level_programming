#include "main.h"

/**
 * set_bit - function to set bit to 1
 * @n: pointer to int
 * @index: index of bit to change
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	*n = *n | (1 << index);

	return (1);
}
