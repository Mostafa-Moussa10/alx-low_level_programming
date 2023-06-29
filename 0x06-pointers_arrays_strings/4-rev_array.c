#include "main.h"

/**
 * reverse_array - function to reverse and array
 *
 * @a: pointer to array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	/*counter*/
	int i = 0;
	int tmp = 0;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
		i++;
	}
}
