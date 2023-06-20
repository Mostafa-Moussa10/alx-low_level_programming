#include "main.h"

/**
 * times_table - function to print the times table up to 9
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	int k = 0;


	while (i < 10)
	{
		j = 1;
		_putchar('0');
		_putchar(',');

		while (j < 10)
		{
			k = i * j;

			_putchar(' ');
			


			if (k < 10)
			{
				_putchar(' ');
				_putchar('0' + k);
			
			}
			
			else
			{
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
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

