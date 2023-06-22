#include <stdio.h>
#include "main.h"

/**
 * _isdigit - function to check whether the input is number or not
 *
 * @c: carry the input number
 *
 * Return: 1 if digit , 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
