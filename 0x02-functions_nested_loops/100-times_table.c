#include "main.h"

/**
 * print_times_table - function to print the times table up to n
 *
 * @n: maximum number
 */

void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int k = 0;


	while (i < n)
	{
		j = 1;
		_putchar('0');
		_putchar(',');
		while (j < n)
		{
			k = i * j;
			_putchar(' ');
			print_digit(k);
			}
			if (j != 9)
			{
				_putchar(',');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}

int print_digit(int n)
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
		n = n % 100;
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
}

