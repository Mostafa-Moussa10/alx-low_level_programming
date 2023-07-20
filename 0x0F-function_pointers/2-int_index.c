#include "function_pointers.h"

/**
 * int_index - function to search an integer
 * @array: pointer to array of elements
 * @size: size of array
 * @cmp: pointer to function to compare values
 * Return: the first element for which the cmp doesnot return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i = 0;
	int res = 0;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);
		if (res != 0)
			return (i);
	}

	return (-1);
}

