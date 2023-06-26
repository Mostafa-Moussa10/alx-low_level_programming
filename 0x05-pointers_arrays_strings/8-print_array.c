#include <stdio.h>

/**
 * print_array - function to print specific element of array of integers
 *
 * @a: pointer to array
 * @n: number of element
 */

void print_array(int *a, int n)
{
	int i = 0; /*counter*/

	if (n > 0)
	{
		while (i < n - 1)
		{
			printf("%d, ", a[i]);
			i++;
		}

		printf("%d\n", a[i]);
	}
}

