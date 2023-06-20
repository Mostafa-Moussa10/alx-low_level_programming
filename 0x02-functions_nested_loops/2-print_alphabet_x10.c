#include  "main.h"

/**
 * print_alphabet_x10 - function to print lower case alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		for (j = 'a' ; j < 'z' ; j++)
		{
			_putchar(j);

		}

		_putchar('\n);
		i++
	}
}
