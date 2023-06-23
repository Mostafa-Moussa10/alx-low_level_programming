#include "main.h"


/**
 * print_triangle - function to  print triangle of size n
 *
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i = 0; /*counter*/
	int j = 1; /*number of line*/

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (j <= size)
		{
			i = 0;
			while (i < size - j)
			{
				_putchar(' ');
				i++;
			}
			while (i < size)
			{
				_putchar('#');
				i++;
			}
			j++;
			_putchar('\n');
		}
	}
}


