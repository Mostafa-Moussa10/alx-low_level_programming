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
		j = 0;
		while (j < 10)
		{
			k = i * j;
			if (k < 10)
			{
				_putchar('0' + k);
		 
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				
			
			}
			
			else
			{
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
				if (j != 9)
                    		{

					_putchar(',');
					_putchar(' ');
				}
			}
			
	
		
			j++;
	
		}

			
		_putchar('\n');
		i++;
	
	
	}
}
