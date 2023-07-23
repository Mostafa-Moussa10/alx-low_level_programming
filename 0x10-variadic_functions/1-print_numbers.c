#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function to print input numbers
 *
 * @separator: the string to be printed between numbers
 * @n: number of inputs
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	for (i = 0; i < n-1; i++)
	{
		printf("%d\n", va_arg(args, int));
		if (separator != NULL)
			printf("%s\n", separator);
	}

	printf("%d\n", va_arg(args, int));
	va_end(args);

}

