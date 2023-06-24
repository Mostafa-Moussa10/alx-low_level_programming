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

	while (i / 10)
	{
		i = i /10;
		j++;
	}

	while (j > 0)
	{
		_putchar('0' + n / (10 * j));
		n = n - (n / (10 * j) * (10 * j);
		j--;
	}
	_putchar('0' + n);

}
