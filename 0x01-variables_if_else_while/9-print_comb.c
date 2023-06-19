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
			putchat(' ');
			
		}
		else
		{

			putchar(' ');
		}
		x++;

	}

	return (0);
}
