#include <stdio.h>


int main(void)
{

	int x = 0;
	int y = 1;

	while (x < 10)
	{
		while (y  < 10)
		{

			putchar('0' + x);
			putchar('0' + y);
			if (y != 9)
			{
				putchar(',');
			}
			putchar(' ');
			y++;
		}

		x++;
		y = x + 1;
	}

	return (0);
}
