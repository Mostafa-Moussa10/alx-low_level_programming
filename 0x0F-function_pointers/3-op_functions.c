#include <stdio.h>
#include "calc.h"

/**
 * op_add - function to get the sum of two integers
 * @a: first number
 * @b: second number
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to get the difference of two integers
 * @a: first number
 * @b: second number
 * Return: result
 */

int op_sub(int a, int b)
{
	if (a > b)
		return (a - b);
	else
		return (b - a);
}

/**
 * op_mul - function to get the product of two integers
 * @a: first number
 * @b: second number
 * Return: result
 */

int op_mul(int a, int b)
{
        return (a * b);
}

/**
 * op_div - function to get the rest of the division of two integers
 * @a: first number
 * @b: second number
 * Return: result
 */

int op_div(int a, int b)
{
        return (a / b);
}

/**
 * op_mod - function to get the remainde of the division of two integers
 * @a: first number
 * @b: second number
 * Return: result
 */

int op_mod(int a, int b)
{
        return (a % b);
}

