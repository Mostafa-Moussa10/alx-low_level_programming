#include "main.h"

/**
 * print_to_98 - function to print to 98
 *
 * @n: start from
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			if (n < 0)
			{
				n = -n;
				_putchar('-');
			}
			print_digit(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			print_digit(n);
			_putchar(',');
			_putchar(' ');
			n--;
		}

	}
	print_digit(98);
	_putchar(' ');

	
}
void print_digit(int n)
{
	if (n < 10)
	{
		_putchar('0' + n);
	}
	else if ((n >= 10) && (n < 100))
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
	else
	{
		_putchar('0' + n / 100);
		_putchar('0' + n % 100);
		_putchar('0' + n % 10);
	}
}
