#include "main.h"

/**
 * print_binary - function to print representation of a number
 * @n: number to print
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 0;
	unsigned long int rev = n;

	if (n == 0)
		_putchar('0');
	while (n)
	{
		i++;
		n = n >> 1;
	}
	i--;
	while (i + 1)
	{
		_putchar(((rev >> i) & 1) + '0');
		i--;
	}
}
