#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: length of the line
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			while (j < i)
			{
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
