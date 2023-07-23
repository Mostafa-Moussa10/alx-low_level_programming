#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function to get the sum of arguments
 *
 * @n: number of arguments
 *
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i =  0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}

	va_end(args);

	return (sum);
}


