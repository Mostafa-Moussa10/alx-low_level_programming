#include "main.h"

/**
 * print_last_digit - function to print the last digit of a number
 *
 * @n: variable of value int to carry the output
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	n = n % 10;

	if (n < 0)
	{
		n = -n;
	}
	_putchar('0' + n);

	return (n);

}

