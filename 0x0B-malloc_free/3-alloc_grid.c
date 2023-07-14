#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function to declare two dimenssion array
 *
 * @width: number of elements of one array
 * @height: number of arrays
 *
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **) malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);


	while (i < height)
	{
		p[i] = (int) malloc(sizeof(int) * width);
		
		if (p[i] == NULL)
		{
			while(i >= 0)
			{
				free(p[i]);
				i--;
			}
			return (NULL);
		}
		i++;
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}


	return (p);
}
