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
	unsigned int i = 0;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int *) malloc(sizeof(int) * width * height);

	if (p == NULL)
		return (NULL);

	while (i < (height * width))
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
