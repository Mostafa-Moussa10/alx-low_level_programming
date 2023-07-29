#include "main.h"

/**
 * factorial - function to get factorial of number
 * @n: input number
 * Return: factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
