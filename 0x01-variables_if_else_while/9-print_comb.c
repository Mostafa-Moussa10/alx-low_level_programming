#include <stdio.h>


int main(void)
{

	int x = 0;

	while (x < 10)
	{
		putchar('0' + x);
		if (x < 10)
		{
			putchar(',');
			putchar(' ');
			
		}
		else
		{

			putchar(' ');
		}
		x++;

	}

	return (0);
}
