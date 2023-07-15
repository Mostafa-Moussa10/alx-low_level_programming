#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function to free 2 dim array
 *
 * @grid: pointer to pointer to the array
 * @height: number of arrays
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid)
}
