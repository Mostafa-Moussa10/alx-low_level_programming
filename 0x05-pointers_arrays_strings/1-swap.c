#include <stdio.h>

/**
 * swap_int - function to swap the values of two integers
 *
 * @a: pointer to the first number
 * @b: pointer to the second number
 */

void swap_int(int *a, int *b)

{
	int x = 0;
	x = *a;
	*a = *b;
	*b = x;
}
