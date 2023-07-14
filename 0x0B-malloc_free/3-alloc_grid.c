#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function to declare two dimenssion array
 *
 * @width: width of array
 * @height: height of the array
 *
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int *) malloc(sizeof(int) * width * height);

	if (p == NULL)
		return (NULL);

	return (p);
}
