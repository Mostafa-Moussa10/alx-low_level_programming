#include "main.h"

/**
 * _pow_recursion - function to get the power of number
 * @x: input number
 * @y: power
 * Return: x power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));

}

