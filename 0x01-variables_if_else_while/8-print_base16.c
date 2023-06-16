#include <stdio.h>


int main(void)
{
	int x = 0;

	while  (x < 10)
	{
		putchar('0' + x);
		x++
	}

	x = 'a';

	while (x <= 'e')
	{
		putchar(x);
		x++
	}

	putchar('\n');

	return 0;
}
