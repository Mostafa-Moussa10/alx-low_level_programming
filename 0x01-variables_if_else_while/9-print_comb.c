#include <stdio.h>


int main(void)
{

	int x = 0;

	while (x < 10)
	{
		putchar('0' + x);
		if (x != 9)
		{
			putchar(',');
		}

		putchar(' ');
		x++;

	}

	return (0);
}
