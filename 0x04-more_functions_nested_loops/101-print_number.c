#include "main.h"

/**
 * print_number - function to print integer with putchar only
 *
 * @n: input number
 */

void print_number(int n)
{
	int i = n; /*counter*/
	int j = 0; /*number of digit*/

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/*get number length*/
	while (i / 10)
	{
		i = i / 10;
		j++;
	}

	while (j > 0)
	{
		i = n / (j * 10);
		_putchar(i + '0');
		n = n % (j * 10);
		j--;
	}
	_putchar('0' + n);

}
