#include <stdio.h>


int main(void)
{

	int x = 0;
	int y = 0;

	while (x < 10)
	{
			
		while (y  < 10)	
		{
			putchar('0' + x);
			putchar('0' + y);
			if ((x != 9) && (y != 8))
			{
				putchar(',');
			}
			putchar(' ');
			y++;
		}
		x++;
		y = x + 1;;
	}

	return (0);
}
