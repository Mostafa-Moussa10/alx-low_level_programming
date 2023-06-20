#include "main.h"


/**
 * print_sign - function to check the sign of number
 *
 * @n: variable to carry the input
 *
 * Return: 1 if positve , -1 if negative , 0 if 0
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return(0);
	}
}
