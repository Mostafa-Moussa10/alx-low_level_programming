#include "main.h"

/**
 * more_numbers - function to print the numbers for 0 to 14 for 10 times
 */


void more_numbers(void)
{
	int i = 0;
	int y = 0;

	while (y < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar('0' + i / 10);
			}
			_putchar('0' + i % 10);
		}
	_putchar('\n');
	y++;
	}
}
