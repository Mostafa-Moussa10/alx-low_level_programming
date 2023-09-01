#include "main.h"

/**
 * print_binary - function to print number in binary form
 *
 * @n: number to print
 */

void print_binary(unsigned long int n)
{
	int i = 0;
	int count = 0;
	unsigned long int current;

	if (n == 0)
		_putchar('0');

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}

}

