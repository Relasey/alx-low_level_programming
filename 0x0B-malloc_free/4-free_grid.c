#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional grid
* @grid: grid to free.
* @height: height of the grid
* return: 0
*/

void free_grid(int **grid, int height)
{
	int h;

	if (grid == NULL || height == 0)
		return;

	for (h = 0; h < height; h++)
		free(grid[h]);

	free(grid);
}
